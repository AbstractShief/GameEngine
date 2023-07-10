/*File "image.cpp" create by debial, (Вс 09 июл 2023 14:14:24)*/
#include "image.h"
#include <SDL2/SDL_render.h>
Image::Image(coord size,const char *name)
   : Texture(size){
      image=IMG_Load(name);
      if(image==nullptr) throw OpenException(name);
      texture=SDL_CreateTextureFromSurface(Renderer,image);
      if(texture==nullptr) throw OpenException("texture");
   }
