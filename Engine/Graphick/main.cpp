/*File "main.cpp" create by debial, (Вс 18 июн 2023 16:24:46)*/
#include "src/object/interface/texture.h"
#include "src/object/geometry/geometry.h"
#include "src/object/image/image.h"
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_keycode.h>
int main(){
   SDL_Init(SDL_INIT_VIDEO);
   Texture::Window=SDL_CreateWindow("Прямоугольник SDL", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 651, 480, SDL_WINDOW_SHOWN);
   Texture::Renderer=SDL_CreateRenderer(Texture::Window, -1, 0);
   SDL_SetRenderDrawColor(Texture::Renderer, 0, 0, 0, 255); // Красный цвет
    // Очистка рендерера
   SDL_RenderClear(Texture::Renderer);
   Point hitbox1(100,100);
   CircleFill image(100,Color(255,0,0,255));
   SDL_Rect rect={30,30,200,200};
   SDL_RenderCopy(Texture::Renderer,image.get_texture(),NULL,&rect);
   //rect.resize(2,2);
   SDL_RenderPresent(Texture::Renderer);
   SDL_Delay(1500);
   SDL_DestroyRenderer(Texture::Renderer);
   SDL_DestroyWindow(Texture::Window);
   SDL_Quit();
}
