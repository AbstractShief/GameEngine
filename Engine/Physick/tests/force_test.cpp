/*File "force_test.cpp" create by debial, (Пн 19 июн 2023 13:19:15)*/
#include <gtest/gtest.h>
#include "../src/force/Force.h"

TEST(MovementForce, GetModuleTest) {
   Point velocity(2,0);
   MovementForce force(velocity);
   EXPECT_EQ(force.GetModule(),2);

   Point velocity2(0,0);
   MovementForce force2(velocity2);
   EXPECT_EQ(force2.GetModule(),0);

   Point velocity3(-2,0);
   MovementForce force3(velocity3);
   EXPECT_EQ(force3.GetModule(),2);
}
TEST(MovementForce, GetVectorTest) {
   Point velocity(2,0);
   MovementForce force(velocity);
   EXPECT_EQ(force.GetVector()->get_x(),velocity.get_x());
   EXPECT_EQ(force.GetVector()->get_y(),velocity.get_y());

   Point velocity2(0,0);
   MovementForce force2(velocity2);
   EXPECT_EQ(force2.GetVector()->get_x(),velocity2.get_x());
   EXPECT_EQ(force2.GetVector()->get_y(),velocity2.get_y());

   Point velocity3(-2,0);
   MovementForce force3(velocity3);
   EXPECT_EQ(force3.GetVector()->get_x(),velocity3.get_x());
   EXPECT_EQ(force3.GetVector()->get_y(),velocity3.get_y());
}

TEST(MovementForce,SetZero){
   Point velocity(2,0);
   MovementForce force(velocity);
   force.set_zero();
   EXPECT_EQ(force.GetVector()->get_x(),0);
   EXPECT_EQ(force.GetVector()->get_y(),0);
   EXPECT_EQ(force.GetModule(),0);
}

