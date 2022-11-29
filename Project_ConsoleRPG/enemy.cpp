#include "enemy.h"

Enemy::Enemy(string name): entity(name)
{
   if(name == "troll"){

       hp = 200;
       def = 15;
       atk = 20;
       speed = 2;
   }
   else if(name == "wizzard"){

       hp = 50;
       def = 15;
       atk = 20;
       speed = 2;
   }
   else{

       hp = 1;
       def = 1;
       atk = 1;
       speed = 1;


   }

}
int Enemy::attack(){

    return(atk*1.5);
}
