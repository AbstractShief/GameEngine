/*File "coord.cpp" create by debial, (Пт 16 июн 2023 11:52:53)*/
#ifndef DEBIAL_COORD_H_SENTURY
#define DEBIAL_COORD_H_SENTURY
#include <list>
#include <unordered_map>
//мера исчесление 2д пространства это см
class Point{
#if DEBUG==1  
   public:
#else
   protected:
#endif
   double x,y;
   public:
   Point(double x,double y);
   void get_pos(double *x,double *y) const;
   double get_x()const;
   double get_y()const;
   void set(double x,double y);
   void set(const Point *coord);
   void move(double x,double y);
   void move(const Point *coord);
   virtual bool Collision(const Point *)const;//always return false; null HitBox Object
};
//          W
//      *------*
//      |      |
//      |      | H
//      |      |
//cord  *------*
class HitBox : public Point{
   protected:
   double W,H;
   public:
   HitBox(Point point,double w,double h);
   void get_size(double *w,double *h)const;
   virtual bool Collision(const Point *) const;//if point in Rect return true
};
//add: внутрение хит боксы должны вмещатся во внешний в ином случае будет вызванно исключение
class CompositeHitBox : public HitBox{
   std::unordered_map<int,HitBox*> blocks;
   public:
   CompositeHitBox(Point point,double w,double h);
   bool Collision(const Point *coord) const;
   int count()const;
   void add(HitBox *hitbox,int id);
   void del(int id);
};
#endif
