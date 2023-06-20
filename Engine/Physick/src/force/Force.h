/*File "Force.cpp" create by debial, (Сб 17 июн 2023 13:34:21)*/
#ifndef DEBIAL_FORCE_H_SENTURY
#define DEBIAL_FORCE_H_SENTURY

#include "../coordinate/coord.h"
#include <time.h>
class MovementForce{
#ifdef DEBUG
   public:
#else
   protected:
#endif
   Point V;//V is speed S is way
   public:
   MovementForce(Point &velocity);
   virtual ~MovementForce();
   const Point *GetVector()const;
   virtual Point GetWay(time_t time)const;
   virtual void update(time_t time);
   double GetModule()const;
   virtual void set_zero();
};



#endif
