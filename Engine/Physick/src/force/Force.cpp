/*File "Force.cpp" create by debial, (Сб 17 июн 2023 13:15:34)*/
#include "Force.h"
#include <bits/types/time_t.h>
#include <math.h>


MovementForce::MovementForce(Point &velocity): V(velocity){}
Point MovementForce::GetWay(time_t time)const{
   return Point(V.get_x()*time,V.get_y()*time);
}
const Point *MovementForce::GetVector()const{
   return &V;
}
double MovementForce::GetModule()const{
   double x,y;
   V.get_pos(&x, &y);
   return sqrt(x*x+y*y);
}
void MovementForce::set_zero(){
   V={0,0};
}
void MovementForce::update(time_t time){}
MovementForce::~MovementForce(){}
