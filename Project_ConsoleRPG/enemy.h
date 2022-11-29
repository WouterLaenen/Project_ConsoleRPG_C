#ifndef ENEMY_H
#define ENEMY_H

#include "entity.h"



using namespace std;

class Enemy : public entity
{
public:
    Enemy(string name );

protected:
    int attack();

};

#endif // ENEMY_H
