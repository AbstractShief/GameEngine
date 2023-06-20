/*File "MyForce.cpp" create by debial, (Вт 20 июн 2023 18:54:52)*/
#include "MyForce.h"
AccelerateForce::AccelerateForce(Point point,double acceleration) 
   : MovementForce(point),SV(point),a(acceleration){}
void AccelerateForce::update(time_t time){
   V.set(V.get_x()+a*time,V.get_y()+a*time);
}
void AccelerateForce::set_a(double acceleration){a=acceleration;}
Point AccelerateForce::GetWay(time_t t) const{
   return {V.get_x()*t+a*t*t/2,V.get_y()*t+a*t*t/2};
}
GravityForce::GravityForce(double G) 
   : AccelerateForce(Point(0,-0.00001),G){}
void GravityForce::set_zero(){
   V.set(&SV);
}

