/*File "main.cpp" create by debial, (Вс 18 июн 2023 16:24:46)*/
#include "src/object/interface/GraphickObject.h"
#include "src/object/geometry/geometry.h"
#include "src/object/image/image.h"
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_keycode.h>
int main(){
   SDL_Init(SDL_INIT_VIDEO);
   GraphickObject::Window=SDL_CreateWindow("Прямоугольник SDL", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 651, 480, SDL_WINDOW_SHOWN);
   GraphickObject::Renderer=SDL_CreateRenderer(GraphickObject::Window, -1, 0);
   SDL_SetRenderDrawColor(GraphickObject::Renderer, 0, 0, 0, 255); // Красный цвет
    // Очистка рендерера
   SDL_RenderClear(GraphickObject::Renderer);
   SDL_SetRenderDrawColor(GraphickObject::Renderer, 255, 0, 0, 255); // Красный цвет
   Point hitbox1(100,100);
   Image image(&hitbox1,coord(0,0),coord(100,100),"../data/tank.png");
   image.graphick();
   //rect.resize(2,2);
   SDL_RenderPresent(GraphickObject::Renderer);
   SDL_Delay(1500);
   SDL_DestroyRenderer(GraphickObject::Renderer);
   SDL_DestroyWindow(GraphickObject::Window);
   SDL_Quit();
}
