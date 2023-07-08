/*File "GraphickObject.h" create by debial, (Пт 07 июл 2023 16:40:49)*/
#ifndef DEBIAL_GRAPHICKOBJECT_H_SENTURY
#define DEBIAL_GRAPHICKOBJECT_H_SENTURY

#include "../../../../Physick/src/coordinate/coord.h"
#include <SDL2/SDL.h>
#include <vector>
class GraphickObject{
   protected:
   GraphickObject* parent;
   std::vector<GraphickObject*> child;
   Point *hitbox;
   Point *hitbox_r;
   bool GraphickChild();
   public:
   static SDL_Window* Window;
   static SDL_Renderer* Renderer;
   GraphickObject(Point *hitbox);
   ~GraphickObject();
   virtual bool graphick()const=0;
   void resize(double xd,double yd);
   void Add(GraphickObject *obj);
   void Remove(GraphickObject *obj);
   GraphickObject *GetChild(int i) const;
};

#endif
