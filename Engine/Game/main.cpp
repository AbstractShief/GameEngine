/*File "main.cpp" create by debial, (Вс 18 июн 2023 16:24:46)*/
#include "../Engine.h"
#include "graphick/tank.h"
std::unordered_map<Uint32,LiveHandler*> LiveObject::GeneralHandlers;
int main(){
   SDL_Init(SDL_INIT_VIDEO);
   GraphickObject::Window=SDL_CreateWindow("Прямоугольник SDL", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 651, 480, SDL_WINDOW_SHOWN);
   GraphickObject::Renderer=SDL_CreateRenderer(GraphickObject::Window, -1, 0);
   SDL_SetRenderDrawColor(GraphickObject::Renderer, 0, 0, 0, 255); // Красный цвет
   SDL_RenderClear(GraphickObject::Renderer);
   SDL_SetRenderDrawColor(GraphickObject::Renderer, 255, 0, 0, 255); // Красный цвет
   
   HitBox hitbox(Point(-50,-50),100,100);
   GraphickTank tank(&hitbox);
   tank.graphick();
   SDL_RenderPresent(GraphickObject::Renderer);
   SDL_Delay(10000);
   SDL_DestroyRenderer(GraphickObject::Renderer);
   SDL_DestroyWindow(GraphickObject::Window);
   SDL_Quit();
}
