/*File "image.cpp" create by debial, (Вс 09 июл 2023 14:21:35)*/
#ifndef DEBIAL_IMAGE_H_SENTURY
#define DEBIAL_IMAGE_H_SENTURY
#include "../interface/GraphickObject.h"
#include "../geometry/geometry.h"
#include "../../exception/GraphickException.h"
#include "SDL2/SDL_image.h"
#include <SDL2/SDL_surface.h>
class Image : public Rectangle{
   SDL_Surface* image;
   SDL_Texture* texture;
   public:
   Image(Point *hitbox,coord offset,coord size,const char *name);
   bool render()const override;
};


#endif
