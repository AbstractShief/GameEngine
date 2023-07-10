/*File "GraphickObject.cpp" create by debial, (Пт 07 июл 2023 16:40:49)*/
#include <SDL2/SDL_rect.h>
#include <SDL2/SDL_render.h>
#include <algorithm>
#include "texture.h"
#include "../../exception/GraphickException.h"
Color::Color(unsigned char r_,unsigned char g_,unsigned char b_,unsigned char a_):
  r(r_),g(g_),b(b_),a(a_){}
SDL_Window* Texture::Window=NULL;
SDL_Renderer* Texture::Renderer=NULL;
Texture::Texture(coord size)
   : rpoint(-1,-1),angle(0),flip(SDL_FLIP_NONE){
   if(Window==NULL) throw InitException("Window");
   if(Renderer==NULL) throw InitException("Renderer");
   texture=SDL_CreateTexture(Renderer, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_TARGET, size.x,size.y);
}
void Texture::init(){
   SDL_SetRenderTarget(Renderer,texture);
   SDL_SetRenderDrawColor(Renderer, 0, 0, 0, 0);
   SDL_RenderClear(Renderer);
   my_init();
   SDL_SetRenderTarget(Renderer,NULL);
}
bool Texture::rotate(double angle_){
   return rotate_to(angle+angle_);
}
bool Texture::rotate_to(double angle_){
   if(rpoint.x==-1 && rpoint.y==-1) throw InitException("dont set rpoint");
   if(angle_<0 || angle_>360) return false;
   angle=angle_;
   return true;
}
void Texture::set_rpoint(coord point){
   rpoint.x=point.x;
   rpoint.y=point.y;
}
void Texture::set_flip(SDL_RendererFlip flip_){
   flip=flip_;
}
void Texture::my_init(){}
bool Texture::is_rotated()const{return true;}

SDL_RendererFlip Texture::get_flip(){
   return flip;
}
double Texture::get_angle(){
   return angle;
}
SDL_Texture* Texture::get_texture(){
   return texture;
}
