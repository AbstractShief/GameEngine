/*File "PhysickException.h" create by debial, (Пт 07 июл 2023 16:27:44)*/
#ifndef DEBIAL_PHYSICKEXCEPTION_H_SENTURY
#define DEBIAL_PHYSICKEXCEPTION_H_SENTURY
#include"../../../General/error/Exception.h"
#include "../coordinate/coord.h"
class PhysickException : public Exception{
   virtual const char* what()const noexcept override{
      return "PhysickException";
   }
};

class GeometryException : public Exception{
   virtual const char* what()const noexcept override{
      return "GeometryException";
   }
};
class HitBoxException : public GeometryException{
   protected:
   HitBox *object;
   public:
   HitBoxException(HitBox *object_);  
   virtual const char* what()const noexcept override{
      return "HitBoxException";
   }
};
class HitBoxOutOfBorder : public HitBoxException{
   HitBox *InObject;
   public:
   HitBoxOutOfBorder(HitBox *object_,HitBox *InObject);
   virtual const char* what()const noexcept override;
};

#endif
