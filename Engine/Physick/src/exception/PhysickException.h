/*File "PhysickException.h" create by debial, (Сб 17 июн 2023 12:04:23)*/
#ifndef DEBIAL_PHYSICKEXCEPTION_H_SENTURY
#define DEBIAL_PHYSICKEXCEPTION_H_SENTURY
#include "../coordinate/coord.h"
//времено тут класс Exception
class Exception{
   public:
   virtual void info()const  = 0;
};
class PhysickException : public Exception{
   //потом доделаю
};

class GeometryException : public Exception{
   
};
class HitBoxException : public GeometryException{
   protected:
   HitBox *object;
   public:
   HitBoxException(HitBox *object_);  
};
class HitBoxOutOfBorder : public HitBoxException{
   HitBox *InObject;
   public:
   HitBoxOutOfBorder(HitBox *object_,HitBox *InObject);
   void info()const;
};
#endif
