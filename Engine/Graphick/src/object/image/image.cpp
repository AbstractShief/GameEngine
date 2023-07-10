/*File "image.cpp" create by debial, (Вс 09 июл 2023 14:14:24)*/
#include "image.h"
#include <SDL2/SDL_render.h>
Image::Image(Point *hitbox,coord offset,coord size,const char *name)
   : Rectangle(hitbox,offset,size){
      image=IMG_Load(name);
      if(image==nullptr) throw OpenException(name);
      texture=SDL_CreateTextureFromSurface(Renderer,image);
      if(texture==nullptr) throw OpenException("texture");
   }
bool Image::render()const{
   SDL_Rect d_rect={ 
      (int)pos.x,(int)pos.y,(int)size.x,(int)size.y
   };
   SDL_Point rp;
   rp.x=rpoint.x;rp.y=rpoint.y;
   SDL_RenderCopyEx(Renderer,texture,NULL,&d_rect,angle,&rp,SDL_FLIP_NONE);
   return true;
}
