/*File "coord.cpp" create by debial, (Пн 24 июл 2023 13:05:03)*/
#include "coord.h"
#include <stdio.h>
char *Vector2I::ToString()const {
   char *str=new char[64];
   sprintf(str,"Vector2I x:%d y:%d",x,y);
   return str;
}
char *Vector2L::ToString()const {
   char *str=new char[64];
   sprintf(str,"Vector2L x:%ld y:%ld",x,y);
   return str;
}
char *Vector2F::ToString()const {
   char *str=new char[64];
   sprintf(str,"Vector2F x:%f y:%f",x,y);
   return str;
}
char *Vector2D::ToString()const {
   char *str=new char[64];
   sprintf(str,"Vector2D x:%lf y:%lf",x,y);
   return str;
}
Vector2I::Vector2I(int x,int y) : Vector2<int,Vector2I>(x,y){}
Vector2L::Vector2L(long x,long y) : Vector2<long,Vector2L>(x,y){}
Vector2F::Vector2F(float x,float y) : Vector2<float,Vector2F>(x,y){}
Vector2D::Vector2D(double x,double y) : Vector2<double,Vector2D>(x,y){}
