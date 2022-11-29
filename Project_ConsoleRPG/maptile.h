#ifndef MAPTILE_H
#define MAPTILE_H

#include <enemy.h>
#include <string.h>
#include <string>
#include <qlist.h>
#include "iostream"


using namespace std;

class MapTile
{
public:
    MapTile(int catagorie );
    void PrintMap(QList<MapTile>  Map);

protected:
    string biome;
    string klass;
    entity* encounter;

    int index;


};

#endif // MAPTILE_H
