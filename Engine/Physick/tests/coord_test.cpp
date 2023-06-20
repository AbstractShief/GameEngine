/*File "test.cpp" create by debial, (Вс 18 июн 2023 17:31:05)*/
#include <gtest/gtest.h>
#include "../src/coordinate/coord.h"
#include "../src/exception/PhysickException.h"
// Тестовый случай: аргумент равен 0
TEST(PointTest, GetTest) {
   double x_b=5,y_b=10;
   double x,y;
   Point point(x_b,y_b);
   point.get_pos(&x, &y);
   EXPECT_EQ(x, x_b); 
   EXPECT_EQ(y, y_b);
   EXPECT_EQ(point.x+5, x_b);
   EXPECT_EQ(point.get_y(), y_b);
}
TEST(PointTest, SetTest) {
   double x_b=5,y_b=10;
   Point point(x_b,y_b);
   x_b--;y_b--;
   Point point_set(x_b,y_b);
   point.set(&point_set);
   EXPECT_EQ(point.get_x(), x_b);
   EXPECT_EQ(point.get_y(), y_b);
   x_b++;y_b++;
   point.set(x_b,y_b);
   EXPECT_EQ(point.get_x(), x_b);
   EXPECT_EQ(point.get_y(), y_b);
}
TEST(PointTest, PointMoveTest) {
   double x_b=5,y_b=10;
   Point point(x_b,y_b);
   Point point_move(2,2);
   point.move(&point_move);
   EXPECT_EQ(point.get_x(), x_b+2);
   EXPECT_EQ(point.get_y(), y_b+2);
   point.move(2,2);
   EXPECT_EQ(point.get_x(), x_b+4);
   EXPECT_EQ(point.get_y(), y_b+4);
}
TEST(PointTest, CollisionTest) {
   Point point(5,5);
   Point point2(5,5);
   EXPECT_FALSE(point.Collision(&point2));
}

TEST(HitBoxTest,GetTest){
   double x=0,y=5,w=10,h=15;
   HitBox hitbox(Point(x,y),w,h);
   double gw,gh;
   hitbox.get_size(&gw, &gh);
   EXPECT_EQ(gw,w);
   EXPECT_EQ(gh,h);
}
TEST(HitBoxTest,Collision){
   double x=0,y=0,w=10,h=15;
   Point point(0,0);
   HitBox hitbox(Point(x,y),w,h);
   EXPECT_TRUE(hitbox.Collision(&point));
   point.set(5,5);
   EXPECT_TRUE(hitbox.Collision(&point));
   point.set(10,15);
   EXPECT_TRUE(hitbox.Collision(&point));
   point.set(-10,5);

   EXPECT_FALSE(hitbox.Collision(&point));
   point.set(15,15);
   EXPECT_FALSE(hitbox.Collision(&point));
   point.set(-10,-5);
}

TEST(CompositeHitBoxTest, AddRectTest){
   HitBox added_hitbox(Point(0,0),5,5);
   HitBox added_hitbox2(Point(0,0),20,20);
   //проверяем добавление
   CompositeHitBox hitbox(Point(5,5),10,10);
   hitbox.add(&added_hitbox,1);
   EXPECT_THROW(hitbox.add(&added_hitbox2,2),HitBoxOutOfBorder);
   EXPECT_EQ(hitbox.count(),1);
   double w,h;
   added_hitbox.get_size(&w,&h);
   EXPECT_EQ(w,5);
   EXPECT_EQ(h,5);
   //проверяем колизию добавленных
   EXPECT_TRUE(hitbox.Collision(new Point(5,5)));
   EXPECT_TRUE(hitbox.Collision(new Point(10,10)));
   EXPECT_TRUE(added_hitbox.Collision(new Point(0,5)));
   EXPECT_TRUE(hitbox.Collision(new Point(10,5)));
   //проверям колизию добавленных от обратного
   EXPECT_FALSE(hitbox.Collision(new Point(2,3)));
   EXPECT_FALSE(hitbox.Collision(new Point(12,65)));
   //удаляем
   hitbox.del(1);
   EXPECT_EQ(hitbox.count(),0);
   //проверяем после удаления
   EXPECT_FALSE(hitbox.Collision(new Point(5,5)));
   EXPECT_FALSE(hitbox.Collision(new Point(10,10)));
   EXPECT_FALSE(hitbox.Collision(new Point(5,10)));
   EXPECT_FALSE(hitbox.Collision(new Point(10,5)));
}








