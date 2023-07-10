/*File "handler.cpp" create by debial, (Сб 08 июл 2023 17:48:46)*/
#ifndef DEBIAL_HANDLER_H_SENTURY
#define DEBIAL_HANDLER_H_SENTURY
#include <SDL2/SDL_events.h>
#include <unordered_map>
#include <SDL2/SDL.h>
class LiveCommand{
   public:
   //LiveCommand(Tank *tank) пример
   virtual void execute()=0;
   virtual void abort()=0;
};
class LiveHandler{
   public:
   virtual LiveCommand* handle(SDL_Event &event)=0;
};
class LiveObject{
   std::unordered_map<Uint32,LiveHandler*> handlers;
   public:
   static std::unordered_map<Uint32,LiveHandler*> GeneralHandlers;
   bool importance;
   //importance==true -> GeneralCommands use after commands
   LiveObject(bool importance=false);
   void handler();
};

#endif
