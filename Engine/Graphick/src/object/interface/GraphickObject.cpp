/*File "GraphickObject.cpp" create by debial, (Пт 07 июл 2023 16:40:49)*/
#include <algorithm>
#include "GraphickObject.h"
#include "../../exception/GraphickException.h"
SDL_Window* GraphickObject::Window=NULL;
SDL_Renderer* GraphickObject::Renderer=NULL;
GraphickObject::GraphickObject(Point *hitbox_)
   : hitbox(hitbox_->copy()),hitbox_r(hitbox_->copy()){
   if(Window==NULL) throw InitException("Window");
   if(Renderer==NULL) throw InitException("Renderer");
}
void GraphickObject::resize(double xd,double yd){
   delete hitbox_r;
   hitbox_r=hitbox->copy();
   hitbox_r->resize(xd,yd);
}
GraphickObject::~GraphickObject(){
   delete hitbox;
   delete hitbox_r;
}
void GraphickObject::Add(GraphickObject *obj){
   child.push_back(obj);
}
void GraphickObject::Remove(GraphickObject* obj){
   child.erase(std::remove(child.begin(),child.end(),obj),child.end());
}
GraphickObject *GraphickObject::GetChild(int i)const{
   return child.at(i);
}
bool GraphickObject::GraphickChild(){
   bool result=true;
   for(auto it=child.begin();it!=child.end();it++){
      if(!(*it)->graphick()) result=false;
   }
   return result;
}
