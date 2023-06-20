/*File "Force.h" create by debial, (Сб 17 июн 2023 13:34:21)*/
#ifndef DEBIAL_FORCE_H_SENTURY
#define DEBIAL_FORCE_H_SENTURY

#include "../coordinate/coord.h"
#include <time.h>
class MovementForce{
#ifdef DEBUG
   public:
#endif
   Point V;
   public:
   MovementForce(Point &velocity);
   const Point *GetVector()const;
   double GetModule()const;
   virtual void update(time_t t);
   void set_zero();
};



#endif
