/*File "object.h" create by debial, (Вт 11 июл 2023 12:30:22)*/
#ifndef DEBIAL_OBJECT_H_SENTURY
#define DEBIAL_OBJECT_H_SENTURY

#include "../../Physick/src/object/PhysicalObject.h"
#include "../../Graphick/src/object/interface/texture.h"
class Object : public PhysicalObject{
   Texture *texture;
   public:
   Object(Texture *texture,HitBox *hitbox,double mass,bool physick);
};

#endif
