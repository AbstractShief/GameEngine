/*File "PhysickException.cpp" create by debial, (Сб 17 июн 2023 12:04:23)*/
#include "PhysickException.h"
#include "../coordinate/coord.h"
#include <stdio.h>

HitBoxException::HitBoxException(HitBox *object_) : object(object_){}
HitBoxOutOfBorder::HitBoxOutOfBorder(HitBox *object_,HitBox *InObject_) 
   : HitBoxException(object_),InObject(InObject_){}
void HitBoxOutOfBorder::info()const{
   double x,y,w,h;
   double x2,y2;
   InObject->get_size(&w,&h);
   object->get_pos(&x2,&y2);
   InObject->get_pos(&x,&y);
   printf("exception: выход за рамки родительского hitbox(x=%lf y=%lf w=%lf h=%lf) в точке (%lf %lf)\n",x,y,w,h,x2,y2);
}
