/*File "object_test.cpp" create by debial, (Пн 19 июн 2023 18:17:07)*/
#include <gtest/gtest.h>
#include <stdexcept>
#include "../src/object/PhysicalObject.h"

TEST(PhysicalObjectTest, TestConstruct){
   Point point(5,5);
   PhysicalObject obj(&point,5);
   EXPECT_EQ(obj.mass,5);
   EXPECT_EQ(obj.hitbox->x,point.x);
   EXPECT_EQ(obj.hitbox->x,point.y);
}
TEST(PhysicalObject,TestMoveTo){
   Point point(5,5);
   PhysicalObject obj(&point,5);
   Point vector(10,5);
   obj.moveTo(&vector);
   EXPECT_EQ(obj.hitbox->x,vector.x);
   EXPECT_EQ(obj.hitbox->y,vector.y);
}
TEST(PhysicalObject,TestAddDelForce){
   Point vector(5,5);
   Point point(5,5);
   MovementForce force(vector);
   MovementForce force2(vector);
   PhysicalObject obj(&point,5);
   obj.add_force(1,&force);
   EXPECT_EQ(obj.forces.size(),1);
   obj.add_force(2,&force2);
   EXPECT_EQ(obj.forces.size(),2);
   EXPECT_THROW(obj.add_force(0,&force2),std::out_of_range);
   obj.del_force(1);
   EXPECT_EQ(obj.forces.size(),1);
   obj.del_force(2);
   EXPECT_EQ(obj.forces.size(),0);
}
TEST(PhysicalObject,TestClear){
   Point vector(5,5);
   Point point(5,5);
   MovementForce force(vector);
   MovementForce force2(vector);
   PhysicalObject obj(&point,5);
   obj.add_force(1,&force);
   obj.add_force(2,&force2);
   obj.clear();
   EXPECT_EQ(obj.forces.size(),0);
}
TEST(PhysicalObject,TestSetZero){
   Point vector(5,5);
   Point point(5,5);
   MovementForce force(vector);
   MovementForce force2(vector);
   PhysicalObject obj(&point,5);
   obj.add_force(1,&force);
   obj.add_force(2,&force2);
   obj.SetZero();
   EXPECT_EQ(force.GetModule(),0);
   EXPECT_EQ(force2.GetModule(),0);
}

TEST(PhysicalObjectTest,TestGetVector){
   Point vector(5,5);
   Point point(5,5);
   MovementForce force(vector);
   MovementForce force2(vector);
   PhysicalObject obj(&point,5);
   PhysicalObject null_obj(&point,5);
   obj.add_force(1,&force);
   obj.add_force(2,&force2);
   Point a=obj.GetVector();
   EXPECT_EQ(a.x,10);
   EXPECT_EQ(a.y,10);
   Point b=null_obj.GetVector();
   EXPECT_EQ(b.x,0);
   EXPECT_EQ(b.y,0);
}
TEST(PhysicalObjectTest,TestUpdate){
   Point vector(5,5);
   Point point(5,5);
   MovementForce force(vector);
   MovementForce force2(vector);
   PhysicalObject obj(&point,5);
   obj.add_force(1,&force);
   obj.add_force(2,&force2);
   obj.update(5);
   EXPECT_EQ(obj.hitbox->x,55);
   EXPECT_EQ(obj.hitbox->y,55);
   obj.update(0);
   EXPECT_EQ(obj.hitbox->x,55);
   EXPECT_EQ(obj.hitbox->y,55);
   obj.update(1);
   EXPECT_EQ(obj.hitbox->x,65);
   EXPECT_EQ(obj.hitbox->y,65);
}




