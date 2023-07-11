/*File "ObjectStorage.cpp" create by debial, (Пн 10 июл 2023 12:30:34)*/
#ifndef DEBIAL_OBJECTSTORAGE_H_SENTURY
#define DEBIAL_OBJECTSTORAGE_H_SENTURY
#include <vector>
#include "../coordinate/coord.h"
#include "../../../General/object/object.h"

enum CardinalPoints{
   CENTER=-1,
   N_CARDINAL=0,
   NE_CARDINAL,
   E_CARDINAL,
   SE_CARDINAL,
   S_CARDINAL,
   SW_CARDINAL,
   W_CARDINAL,
   NW_CARDINAL,
};
class Block{
   int live,maxlive;
   public:
   std::vector<Object*> objects;
   Block(int empty_live_time);
   void add(Object *object);
   void del(Object *object);
   int update(){
      live--;
      if(objects.size()!=0) live=maxlive;
      return live;
   }
};
class CoordinateTreeCommand{
   public:
   virtual void handler(Block *block,coord &point)=0;
};
class CoordinateTree{
   struct Leaf{
      Block *block;
      coord point;
      Leaf *leafs[8];
      Leaf(coord &point_) : point(point_){memset(leafs,0,sizeof(leafs));}
      ~Leaf(){delete block;}
   };
   Leaf *root=NULL;
   Leaf **find_block(Leaf **ptr,coord &point);
   void add(Leaf *leaf,Leaf **ptr);
   void execute(Leaf* ptr,CoordinateTreeCommand *command);
   public:
   void execute(CoordinateTreeCommand *command);
   void add(Block *object,coord &point);
   Block* get(coord &point);
   bool del(coord &point);
   bool check(coord &point);
};
class CoordinateTreeUpdate;
class ObjectStorage{
   coord size;
   int empty_live_time;
   CoordinateTree blocks;
   friend CoordinateTreeUpdate;
   void DelBlock(coord &point);
   public:
   ObjectStorage(coord size,int empty_live_time);
   void add(Object *object);
   void del(Object *object);
   void update();
   coord get_size();
};
#endif
