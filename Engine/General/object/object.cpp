/*File "object.cpp" create by debial, (Вт 11 июл 2023 12:31:16)*/
#include "object.h"
Object::Object(Texture *texture_,HitBox *hitbox,double mass,bool physick) 
   : PhysicalObject(hitbox,mass,physick),texture(texture_){}
