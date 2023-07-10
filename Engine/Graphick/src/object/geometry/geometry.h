/*File "geometry.cpp" create by debial, (Сб 08 июл 2023 12:01:03)*/
#ifndef DEBIAL_GEOMETRY_H_SENTURY
#define DEBIAL_GEOMETRY_H_SENTURY

#include "../interface/texture.h"
class Rectangle : public Texture{
   protected:
   coord size;
   Color color;
   virtual void my_init() override;
   public:
   virtual bool is_rotated()const override{return true;}
   Rectangle(coord size,Color color);
};
class RectangleFill : public Rectangle{
   void my_init() override;
   public:
   virtual bool is_rotated()const override{return true;}
   RectangleFill(coord size,Color color);
};

class Square : public Rectangle{
   public:
   Square(int a,Color color);
};
class SquareFill : public RectangleFill{
   public:
   SquareFill(int a,Color color);
};
class Circle : public Texture{
   protected:
   Color color;
   int R;
   virtual bool is_rotated()const override{return false;}
   virtual void my_init() override;
   public:
   Circle(int R,Color color);
};
class CircleFill : public Circle{
   virtual void my_init() override;
   public:
   CircleFill(int R,Color color);
};
#endif
