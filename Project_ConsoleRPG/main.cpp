#include <iostream>
#include <string>
#include <QList>

#include "stdlib.h"
#include <time.h>

#include "entity.h"
#include "player.h"
#include "maptile.h"

using namespace std;

int main()
{

    entity* biba = new Player("hero");

    QList<MapTile> Map;



    for( int i=0; i<= 5;i++){

        Map[i] = *new MapTile(rand()%3);
    }



    cout; << biba->name << endl;
    return 0;
}
