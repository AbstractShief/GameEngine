/*File "PhysicalObject.cpp" create by debial, (Сб 17 июн 2023 13:10:38)*/
#ifndef DEBIAL_PHYSICALOBJECT_H_SENTURY
#define DEBIAL_PHYSICALOBJECT_H_SENTURY
#include "../coordinate/coord.h"
#include "../force/Force.h"
class PhysicalObject{
#ifdef DEBUG
   public:
#endif
   double mass;
   Point *hitbox;
   std::unordered_map<int,MovementForce*> forces;
   void SetZero();
   Point GetVector()const;
   void UpdateContactVector(Point &Point);
   public:
   PhysicalObject(Point *point,double mass);
   void contact(PhysicalObject *initiator);
   void clear();
   void update(time_t time);
   void moveTo(Point *coord);
   void add_force(int id,MovementForce *force);
   void del_force(int id);

};

#endif
