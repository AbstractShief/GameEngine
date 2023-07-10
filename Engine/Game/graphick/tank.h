/*File "tank.h" create by debial, (Вс 09 июл 2023 12:26:28)*/
#ifndef DEBIAL_TANK_H_SENTURY
#define DEBIAL_TANK_H_SENTURY
#include "../../Engine.h"

#define TANK_MASS 100
class GraphickTank : public Image{
   public:
   GraphickTank(HitBox *hitbox) 
      : Image(hitbox,coord(0,0),hitbox->get_size(),"../data/tank.png"){
      }
      bool render()const override{
         return Image::render();
      }
};

#endif
