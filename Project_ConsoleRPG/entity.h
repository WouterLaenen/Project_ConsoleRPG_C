#ifndef ENTITY_H
#define ENTITY_H

#include <string>

#include "stdlib.h"
#include <time.h>


using namespace std;



class entity
{
public:
    entity(string name);
     string name;

protected:

    virtual int attack()=0;




    int range;
    int hp;
    int def;
    int atk;
    int speed;
    int storage;
    int money;

private:



};

#endif // ENTITY_H
