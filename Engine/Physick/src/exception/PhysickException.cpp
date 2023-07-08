/*File "PhysickException.cpp" create by debial, (Пт 07 июл 2023 16:27:44)*/
#include "PhysickException.h"
HitBoxException::HitBoxException(HitBox *object_) : object(object_){}
HitBoxOutOfBorder::HitBoxOutOfBorder(HitBox *object_,HitBox *InObject_) 
   : HitBoxException(object_),InObject(InObject_){}
const char* HitBoxOutOfBorder::what()const noexcept{
   double x,y,w,h;
   double x2,y2;
   InObject->get_size(&w,&h);
   object->get_pos(&x2,&y2);
   InObject->get_pos(&x,&y);
   printf("HitBoxOutOfBorderException:\nвыход за рамки родительского hitbox(x=%lf y=%lf w=%lf h=%lf) в точке (%lf %lf)\n",x,y,w,h,x2,y2);
   return "HitBoxOutOfBorder";
}
