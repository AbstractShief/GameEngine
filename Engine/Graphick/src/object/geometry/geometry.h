/*File "geometry.cpp" create by debial, (Сб 08 июл 2023 12:01:03)*/
#ifndef DEBIAL_GEOMETRY_H_SENTURY
#define DEBIAL_GEOMETRY_H_SENTURY

#include "../interface/GraphickObject.h"
class Rectangle : public GraphickObject{
   coord size_base;
   protected:
   coord size;
   virtual void MyResize(double xd,double yd) override;
   virtual bool render() const override;
   public:
   virtual bool is_rotated()const override{return true;}
   Rectangle(Point* hitbox,coord offset,coord size);
};

class Square : public Rectangle{
   public:
   Square(Point* hitbox,coord offset,int a);
};
class CircleFill : public GraphickObject{
   int R_base;
   protected:
   int R;
   virtual void MyResize(double xd,double yd) override;
   virtual bool render() const override;
   public:
   virtual bool is_rotated()const override{return false;}
   CircleFill(Point *hitbox,coord offset,int R);
};
class Circle : public CircleFill{
   protected:
   virtual bool render() const override;
   public:
   Circle(Point *hitbox,coord offset,int R);
};
#endif
