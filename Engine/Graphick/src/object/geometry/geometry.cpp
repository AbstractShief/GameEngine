/*File "geometry.cpp" create by debial, (Сб 08 июл 2023 13:08:25)*/
#include "geometry.h"
#include <SDL2/SDL_render.h>
#include <cmath>
#include <math.h>

Rectangle::Rectangle(coord size_,Color color_)
   : Texture(size_),size(size_),color(color_){
      init();
}
void Rectangle::my_init(){
   color.set();
   SDL_Rect rect={0,0,(int)size.x,(int)size.y};
   SDL_RenderDrawRect(Renderer,&rect);
}
RectangleFill::RectangleFill(coord size_,Color color_)
   : Rectangle(size_,color_){
      init();
}
void RectangleFill::my_init(){
   color.set();
   SDL_Rect rect={0,0,(int)size.x,(int)size.y};
   SDL_RenderFillRect(Renderer,&rect);
}
Square::Square(int a,Color color)
   : Rectangle(coord(a,a),color){
      init();
   }
SquareFill::SquareFill(int a,Color color)
   : RectangleFill(coord(a,a),color){
      init();
   }

CircleFill::CircleFill(int R,Color color) : Circle(R,color){
      init();
}
Circle::Circle(int R_,Color color_)
  : Texture(coord(R_*2,R_*2)),R(R_),color(color_){
      init();
  }
void Circle::my_init(){
   color.set();
   int x=R-1,y=0,tx=1,ty=1;
   int error=tx-(R*2);
   while (x>=y){
      SDL_RenderDrawPoint(Renderer,R+x,R+y);
      SDL_RenderDrawPoint(Renderer,R+x,R-y);
      SDL_RenderDrawPoint(Renderer,R-x,R+y);
      SDL_RenderDrawPoint(Renderer,R-x,R-y);
      SDL_RenderDrawPoint(Renderer,R+y,R+x);
      SDL_RenderDrawPoint(Renderer,R+y,R-x);
      SDL_RenderDrawPoint(Renderer,R-y,R+x);
      SDL_RenderDrawPoint(Renderer,R-y,R-x);
      if(error<=0){
         ++y;
         error+=ty;
         ty+=2;
      }
      if(error>0){
         --x;
         tx+=2;
         error+=(tx-(R*2));
      }
   }

}
void CircleFill::my_init(){
   color.set();
   int x,y;
   int pos=(int)(R*sqrt(2))/2;
   SDL_Rect rect={R-pos,R-pos,pos*2,pos*2};
   for(x=-R;x<=R;x++)
      for(y=-R;y<=R;y++)
         if(x*x+y*y<=R*R)
            SDL_RenderDrawPoint(Renderer,R+x,R+y);
}








