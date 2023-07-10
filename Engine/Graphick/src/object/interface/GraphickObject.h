/*File "GraphickObject.h" create by debial, (Пт 07 июл 2023 16:40:49)*/
#ifndef DEBIAL_GRAPHICKOBJECT_H_SENTURY
#define DEBIAL_GRAPHICKOBJECT_H_SENTURY

#include "../../../../Physick/src/coordinate/coord.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_rect.h>
#include <SDL2/SDL_render.h>
#include <vector>
class GraphickObject{
public:
   static SDL_Window* Window;
   static SDL_Renderer* Renderer;
protected:
   SDL_Texture* texture;
   coord rpoint;
   double angle;
   SDL_RendererFlip flip;
public:
   GraphickObject();
   int graphick(SDL_Rect *to,SDL_Rect *from=NULL);

   void set_flip(SDL_RendererFlip flip);
   void set_rpoint(coord point);
   bool rotate(double angle);
   bool rotate_to(double angle);
   double get_angle()const;
   virtual bool is_rotated()const=0;
};

#endif
