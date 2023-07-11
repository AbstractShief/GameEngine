/*File "coord.cpp" create by debial, (Сб 17 июн 2023 10:59:40)*/
#include "coord.h"
#include "../exception/PhysickException.h"
coord::coord(double x_,double y_) : x(x_),y(y_){}
Point::Point(double x_,double y_)
   : x(x_),y(y_){}
void Point::get_pos(double *x_,double *y_) const{
   *x_=x;
   *y_=y;
}
coord Point::get_pos()const{
   return coord(x,y);
}
Point::operator coord(){
   return coord(x,y);
}
double Point::get_x()const{return x;}
double Point::get_y()const{return y;}
void Point::set(double x_,double y_){
   x=x_;
   y=y_;
}
Point* Point::copy()const{
   return new Point(*this);
}
void Point::set(const Point *coord){
   coord->get_pos(&x,&y);
}
void Point::move(double x_,double y_){
   x+=x_;
   y+=y_;
}
void Point::move(const Point *coord){
   double x_m=0,y_m=0;
   coord->get_pos(&x_m,&y_m);
   x+=x_m;y+=y_m;
}
bool Point::Collision(const Point *)const{
   return false;
}
void Point::resize(double xd,double yd){
   x*=xd;y*=yd;
}
HitBox::HitBox(Point point,double w,double h) 
   : Point(point),W(w),H(h){}
void HitBox::get_size(double *w,double *h)const{
   *w=W;
   *h=H;
}
coord HitBox::get_size()const{
   return coord(W,H);
}
bool HitBox::Collision(const Point *point) const{
   double x_o,y_o;
   point->get_pos(&x_o,&y_o);
   if(x_o>=x && x_o<=x+W && y_o>=y && y_o<=y+H) return true;
   return false;
}
Point* HitBox::copy()const{
   return new HitBox(*this);
}
void HitBox::resize(double xd,double yd){
   Point::resize(xd, yd);
   W*=xd;H*=yd;
}
CompositeHitBox::CompositeHitBox(Point point,double w,double h) :
   HitBox(point,w,h){}
bool CompositeHitBox::Collision(const Point *coord) const{
   if(!HitBox::Collision(coord)) return false;
   for(auto it=blocks.begin();it!=blocks.end();it++){
      it->second->move(x,y);
      if(it->second->Collision(coord)) {
         it->second->move(-x,-y);
         return true;
      }
      it->second->move(-x,-y);
   }
   return false;
}
Point* CompositeHitBox::copy()const{
   return new CompositeHitBox(*this);
}
void CompositeHitBox::add(HitBox *hitbox,int id){
   double w_n,h_n;
   hitbox->move(x,y);
   hitbox->get_size(&w_n,&h_n);
   HitBoxOutOfBorder except(hitbox,this);
   if(!HitBox::Collision(hitbox)) throw except;
   hitbox->move(w_n,h_n);
   if(!HitBox::Collision(hitbox)) throw except;
   hitbox->move(-w_n,-h_n);
   hitbox->move(-x,-y);

   blocks.insert(std::make_pair(id,hitbox));
}
void CompositeHitBox::del(int id){
   blocks.erase(id);
}
int CompositeHitBox::count()const{
   return blocks.size();
}
void CompositeHitBox::resize(double xd,double yd){
   HitBox::resize(xd,yd);
   for(auto it=blocks.begin();it!=blocks.end();it++)
      it->second->resize(xd,yd);
}
