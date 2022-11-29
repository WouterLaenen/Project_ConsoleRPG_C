
#include "player.h"

Player::Player(string name ): entity(name){

    hp = 100;
    def = 15;
    atk = 15;
    speed = 2;
    storage = 10;
    money = 500;
};
int Player::attack(){

    return(atk*1.5);
}
