/*File "main.cpp" create by debial, (Вс 18 июн 2023 16:24:46)*/
#include "src/coordinate/coord.h"
#include "src/exception/PhysickException.h"
#include <stdio.h>
void info(HitBox *hitbox){
   double x,y,w,h;
   hitbox->get_pos(&x,&y);
   hitbox->get_size(&w,&h);
   printf("x=%lf y=%lf w=%lf h=%lf\n",x,y,w,h);
}
int main(){
   HitBox added_hitbox(Point(0,0),5,5);
   //проверяем добавление
   CompositeHitBox hitbox(Point(5,5),10,10);
   hitbox.add(&added_hitbox,1);

   info(&added_hitbox);
   printf("%d\n",hitbox.Collision(new Point(5,10)));
   info(&added_hitbox);
   printf("%d\n",hitbox.Collision(new Point(5,10)));
   info(&added_hitbox);
   printf("%d\n",hitbox.Collision(new Point(5,10)));
   return 0;
}
