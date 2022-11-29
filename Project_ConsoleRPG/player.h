#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "entity.h"



using namespace std;


class Player: public entity
{
public:
    Player(string name);
    Player();


protected:
   int attack();


};

#endif // PLAYER_H
