/*File "geometry.cpp" create by debial, (Сб 08 июл 2023 13:08:25)*/
#include "geometry.h"

Rectangle::Rectangle(Point* hitbox,coord offset,coord size_)
  : GraphickObject(hitbox,offset),size_base(size_),size(size_){
     rpoint.x=size.x/2;
     rpoint.y=size.y/2;
  }
bool Rectangle::render()const{
   double angleRadians = angle * 3.14159 / 180.0;
   double cosAngle = cos(angleRadians);
   double sinAngle = sin(angleRadians);
   double xp=rpoint.x+pos.x,yp=rpoint.y+pos.y;
   int x1 = xp + cosAngle * (-size.x / 2) - sinAngle * (-size.y / 2);
   int y1 = yp + sinAngle * (-size.x / 2) + cosAngle * (-size.y / 2);
   int x2 = xp + cosAngle * (size.x / 2) - sinAngle * (-size.y / 2);
   int y2 = yp + sinAngle * (size.x / 2) + cosAngle * (-size.y / 2);
   int x3 = xp + cosAngle * (size.x / 2) - sinAngle * (size.y / 2);
   int y3 = yp + sinAngle * (size.x / 2) + cosAngle * (size.y / 2);
   int x4 = xp + cosAngle * (-size.x / 2) - sinAngle * (size.y / 2);
   int y4 = yp + sinAngle * (-size.x / 2) + cosAngle * (size.y / 2);

   SDL_RenderDrawLine(Renderer, x1, y1, x2, y2);
   SDL_RenderDrawLine(Renderer, x2, y2, x3, y3);
   SDL_RenderDrawLine(Renderer, x3, y3, x4, y4);
   SDL_RenderDrawLine(Renderer, x4, y4, x1, y1);
   return true;
}
void Rectangle::MyResize(double xd,double yd){
   size.x=size_base.x*xd;
   size.y=size_base.y*yd;
}
Square::Square(Point* hitbox,coord offset,int a) : Rectangle(hitbox,offset,coord(a,a)){}
void CircleFill::MyResize(double xd,double yd){
   R=R_base*(xd<yd ? xd : yd);
}
bool CircleFill::render() const{
   for(int w=0;w<=R*2;++w) {
      for(int h=0;h<=R*2;++h) {
         int dx=R-w;
         int dy=R-h;
         if((dx*dx+dy*dy)<=(R*R)){
             SDL_RenderDrawPoint(Renderer,pos.x+dx,pos.y+dy);
         }
      }
   }
   return true;
}
CircleFill::CircleFill(Point *hitbox,coord offset,int R_)
   : GraphickObject(hitbox,offset),R_base(R_),R(R_){}
Circle::Circle(Point *hitbox,coord offset,int R)
   : CircleFill(hitbox,offset,R){}
bool Circle::render() const{
   const int D=(R * 2);
   int x=(R-1);
   int y=0,tx=1,ty=1;
   int error = (tx - D);
   while (x >= y) {
      // Отрисовка 8 симметричных точек окружности
      SDL_RenderDrawPoint(Renderer,pos.x+x,pos.y-y);
      SDL_RenderDrawPoint(Renderer,pos.x+x,pos.y+y);
      SDL_RenderDrawPoint(Renderer,pos.x-x,pos.y-y);
      SDL_RenderDrawPoint(Renderer,pos.x-x,pos.y+y);
      SDL_RenderDrawPoint(Renderer,pos.x+y,pos.y-x);
      SDL_RenderDrawPoint(Renderer,pos.x+y,pos.y+x);
      SDL_RenderDrawPoint(Renderer,pos.x-y,pos.y-x);
      SDL_RenderDrawPoint(Renderer,pos.x-y,pos.y+x);
      if (error<=0) {
         y++;
         error+=ty;
         ty+=2;
      }
      else{
         x--;
         tx+=2;
         error+=(tx-D);
      }
   }
   return true;
}
