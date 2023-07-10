/*File "texture.cpp" create by debial, (Пт 07 июл 2023 16:40:49)*/
#ifndef DEBIAL_GRAPHICKOBJECT_H_SENTURY
#define DEBIAL_GRAPHICKOBJECT_H_SENTURY

#include "../../../../Physick/src/coordinate/coord.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_rect.h>
#include <SDL2/SDL_render.h>
#include <vector>
class Texture{
public:
   static SDL_Window* Window;
   static SDL_Renderer* Renderer;
   coord rpoint;
   double angle;
   SDL_RendererFlip flip;
protected:
   SDL_Texture *texture;
   virtual void my_init();
   virtual void init();
public:
   Texture(coord size);

   SDL_RendererFlip get_flip();
   double get_angle();
   SDL_Texture* get_texture();

   void set_flip(SDL_RendererFlip flip);
   void set_rpoint(coord point);
   bool rotate(double angle);
   bool rotate_to(double angle);
   virtual bool is_rotated()const;
};
struct Color{
   unsigned char r,g,b,a;
   Color(unsigned char r,unsigned char g,unsigned char b,unsigned char a);
   void set(){
      SDL_SetRenderDrawColor(Texture::Renderer,r,g,b,a);
   }
};

#endif
