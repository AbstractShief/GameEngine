/*File "MyForce.h" create by debial, (Вт 20 июн 2023 18:54:52)*/
#ifndef DEBIAL_MYFORCE_H_SENTURY
#define DEBIAL_MYFORCE_H_SENTURY
#include "Force.h"

class AccelerateForce : public MovementForce{
#ifdef DEBUG
   public:
#else
   protected:
#endif
   Point SV;
   double a;
   public:
   AccelerateForce(Point point,double acceleration);
   void set_a(double acceleration);
   virtual void update(time_t time) override;
   virtual Point GetWay(time_t time) const override;
};
class GravityForce : public AccelerateForce{
   public:
   GravityForce(double G);
   virtual void set_zero() override;
};

#endif
