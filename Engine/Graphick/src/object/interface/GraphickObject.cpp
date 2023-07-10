/*File "GraphickObject.cpp" create by debial, (Пт 07 июл 2023 16:40:49)*/
#include <SDL2/SDL_rect.h>
#include <SDL2/SDL_render.h>
#include <algorithm>
#include "GraphickObject.h"
#include "../../exception/GraphickException.h"
SDL_Window* GraphickObject::Window=NULL;
SDL_Renderer* GraphickObject::Renderer=NULL;
GraphickObject::GraphickObject()
   : rpoint(-1,-1){
   if(Window==NULL) throw InitException("Window");
   if(Renderer==NULL) throw InitException("Renderer");
}
int GraphickObject::graphick(SDL_Rect *to,SDL_Rect *from){
   if(is_rotated() && rpoint.x==-1 && rpoint.y==-1) throw InitException("dont set rpoint");
   if(texture==NULL) throw InitException("dont init object texture");
   return SDL_RenderCopyEx(Renderer,texture,from,to,angle,(SDL_Point*)&rpoint,flip);
}
bool GraphickObject::rotate(double angle_){
   return rotate_to(angle+angle_);
}
bool GraphickObject::rotate_to(double angle_){
   if(rpoint.x==-1 && rpoint.y==-1) throw InitException("dont set rpoint");
   if(angle_<0 || angle_>360) return false;
   angle=angle_;
   return true;
}
double GraphickObject::get_angle()const{return angle;}

void GraphickObject::set_rpoint(coord point){
   rpoint.x=point.x;
   rpoint.y=point.y;
}
void GraphickObject::set_flip(SDL_RendererFlip flip_){
   flip=flip_;
}


