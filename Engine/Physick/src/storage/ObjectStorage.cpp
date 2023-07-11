/*File "ObjectStorage.cpp" create by debial, (Вт 11 июл 2023 15:40:59)*/
#include "ObjectStorage.h"
#include <iostream>
#include <algorithm>
#define EMPTY_LIVE_TIME 10000
#define CARDINAL_MACRO(a,b,c1,c2,c3) \
      if(a<b) return c2;\
      if(a>b) return c3;\
      else return c1;

CardinalPoints get_direction_index(coord &a,coord &b){
   if(a.x>b.x){
      CARDINAL_MACRO(a.y, b.y, W_CARDINAL,NW_CARDINAL,SW_CARDINAL);
   }else if(a.x<b.x){
      CARDINAL_MACRO(a.y, b.y, E_CARDINAL,NE_CARDINAL,SE_CARDINAL);
   }
   CARDINAL_MACRO(a.y, b.y, CENTER,N_CARDINAL,S_CARDINAL);
}
CoordinateTree::Leaf **CoordinateTree::find_block(Leaf **ptr,coord &point){
   if(*ptr==NULL) return ptr;
   CardinalPoints cardinal=get_direction_index((*ptr)->point,point);
   Block** ptr_c;

   if(cardinal==CENTER) return ptr;
   return find_block(&(*ptr)->leafs[cardinal],point);
}
void CoordinateTree::add(Block *object,coord &point){
   Leaf *new_leaf=new Leaf(point);
   new_leaf->block=object;
   add(new_leaf,&root);
}
void CoordinateTree::add(Leaf *new_leaf,Leaf **ptr){
   Leaf **leaf=find_block(ptr, new_leaf->point);
   if(*leaf==NULL) 
      (*leaf)=new_leaf;
   else printf("error\n");
}
Block* CoordinateTree::get(coord &point){
   Leaf *leaf=*find_block(&root,point);
   if(leaf==NULL) return NULL; 
   return leaf->block;
}
bool CoordinateTree::check(coord &point){
   Leaf *leaf=*find_block(&root,point);
   if(leaf==NULL) return false; 
   return true;
}
bool CoordinateTree::del(coord &point){
   Leaf **leaf=find_block(&root, point);
   if(leaf==NULL) return false;
   Leaf *death=*leaf;
   Leaf *n_leaf=(*leaf)->leafs[0];
   for(int i=1;i<8;i++) 
      if((*leaf)->leafs[i]!=NULL)
         add((*leaf)->leafs[i],&n_leaf);
   *leaf=n_leaf;
   delete death;
   return true;
}
void CoordinateTree::execute(Leaf* ptr,CoordinateTreeCommand *command){
   if(ptr==NULL) return;
   command->handler(ptr->block,ptr->point);
   for(int i=0;i<8;i++){
      if(ptr->leafs[i]!=NULL)
         execute(ptr->leafs[i],command);
   }
}
void CoordinateTree::execute(CoordinateTreeCommand *command){
   execute(root,command);
}

ObjectStorage::ObjectStorage(coord size_,int empty_live_time_) :size(size_),empty_live_time(empty_live_time_){}
coord get_block_pos(Object *object,coord size){
   coord pos=((const HitBox*)*object)->get_pos();
   return coord((int)(pos.x/size.x),(int)(pos.y/size.y));
}
void ObjectStorage::add(Object *object){
   coord block_pos=get_block_pos(object);
   Block *block=blocks.get(block_pos);
   if(block==NULL)
      blocks.add(new Block(empty_live_time),block_pos);
   block->add(object);
}
void ObjectStorage::del(Object *object){
   
}

bool check_in(Object *object,coord pos,coord size){
   coord obj_pos=get_block_pos(object,size);
   if((int)obj_pos.x==(int)pos.x 
         &&(int)(obj_pos.x)==(int)pos.x)
      return true;
   return false;
}
class CoordinateTreeUpdate : public CoordinateTreeCommand{
   ObjectStorage *storage;
   coord size;
   public:
   CoordinateTreeUpdate(ObjectStorage *storage_) 
      : storage(storage_),size(storage_->get_size()){}
   void handler(Block* block,coord &point) override{
      for(auto it=block->objects.begin();it!=block->objects.end();it++){
         if(!check_in((*it),point,size)){
            storage->add(*it);
            block->del((*it));
         }
         if(block->update()==0) storage->DelBlock(point);
      }
   }
};

void ObjectStorage::update(){
     CoordinateTreeUpdate updater(this);
     blocks.execute(&updater);
}
coord ObjectStorage::get_size(){
   return size;
}
void ObjectStorage::DelBlock(coord &point){
   blocks.del(point);
}
Block::Block(int empty_live_time_ ) : maxlive(empty_live_time_),live(empty_live_time_+1){}
void Block::add(Object *object){objects.push_back(object);}
void Block::del(Object *object){
    auto it = std::find(objects.begin(), objects.end(), object);
    if (it != objects.end()) {
        objects.erase(it);
    }
    if(objects.size()==0 && live==maxlive+1)live=maxlive;
    else live=maxlive+1;
}

