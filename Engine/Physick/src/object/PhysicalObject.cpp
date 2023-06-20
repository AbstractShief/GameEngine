/*File "PhysicalObject.cpp" create by debial, (Сб 17 июн 2023 13:38:06)*/
#include<math.h>
#include <stdexcept>
#include "PhysicalObject.h"
Point ObjectColissionSpeed(double m1,double m2,double v1,double v2){
   double a,b,c,d,y;
   a=m1*v1+m2*v2;
   b=m1*v1*v1+m2*v2*v2;
   c=2*a*m2;
   d=2*m2*(m2+m1);
   char minus=1;
   if(v1<v2) minus=-1;
   y=(c+minus*sqrt(c*c-2*d*(a*a-b*m1)))/d;
   return (Point){(a-y*m2)/m1,y};
}
void PhysicalObject::SetZero(){
   for(auto it=forces.begin();it!=forces.end();it++)
      it->second->set_zero();
}
Point PhysicalObject::GetVector()const{
   Point point(0,0);
   for(auto it=forces.begin();it!=forces.end();it++)
      point.move(it->second->GetVector());
   return point;
}
void PhysicalObject::UpdateContactVector(Point &point){
   try{
      MovementForce *force=forces.at(0);
      delete force;
      forces.erase(0);
   }catch(std::out_of_range &e){}
   forces.insert(std::make_pair(0,new MovementForce(point)));
}

PhysicalObject::PhysicalObject(Point *point,double mass_) 
   : mass(mass_),hitbox(point){}
void PhysicalObject::contact(PhysicalObject *initiator){
   Point a=GetVector(),b=initiator->GetVector();
   double vx1,vx2,vy1,vy2;
   a.get_pos(&vx2,&vy2);
   b.get_pos(&vx2,&vy2);
   SetZero();
   initiator->SetZero();
   Point X_v=ObjectColissionSpeed(mass,initiator->mass,vx1,vx2);
   Point Y_v=ObjectColissionSpeed(mass,initiator->mass,vx1,vx2);
   X_v.get_pos(&vx1,&vx2);
   Y_v.get_pos(&vy1,&vy2);
   a={vx1,vy1};b={vx2,vy2};
   UpdateContactVector(a);
   initiator->UpdateContactVector(b);
}
void PhysicalObject::clear(){
   forces.clear();
}
void PhysicalObject::update(time_t time){
   for(auto it=forces.begin();it!=forces.end();it++){
      MovementForce *force=it->second;
      if(force->GetVector()!=0){
         Point a=force->GetWay(time);
         hitbox->move(&a);
         force->update(time);
      }else forces.erase(it);
   }

}
void PhysicalObject::moveTo(Point *coord){
   hitbox->set(coord);
}
void PhysicalObject::add_force(int id,MovementForce *force){//0 это зарезервированное число
   if(id==0) throw std::out_of_range("0 это зарезервированное число");
   forces.insert(std::make_pair(id,force));
}
void PhysicalObject::del_force(int id){
   forces.erase(id);
}
