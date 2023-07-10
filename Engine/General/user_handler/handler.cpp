/*File "handler.cpp" create by debial, (Сб 08 июл 2023 18:37:45)*/
#include "handler.h"
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_stdinc.h>
#include <stdexcept>
#include <unordered_map>
LiveCommand *GetCommand(SDL_Event &event,std::unordered_map<Uint32,LiveHandler*> &a,std::unordered_map<Uint32,LiveHandler*> &b){
   LiveHandler *obj=NULL;
   LiveCommand *command=NULL;
   std::out_of_range *error=NULL;
   try{
      obj=a.at(event.type);
      try{
         if((command=obj->handle(event))==NULL)
            command=b.at(event.type)->handle(event);
      }catch(std::out_of_range &e) {error=&e;}
   }catch(std::out_of_range &e){
      command=b.at(event.type)->handle(event);
   }
   if(error!=NULL) throw *error;
   return command;
}
LiveObject::LiveObject(bool importance_)
  : importance(importance_){}
void LiveObject::handler(){
   SDL_Event event;
   while(SDL_PollEvent(&event)!=0){
      LiveCommand *command;
      if(importance)
         command=GetCommand(event,handlers,GeneralHandlers);
      else
         command=GetCommand(event,GeneralHandlers,handlers);
   }
}
