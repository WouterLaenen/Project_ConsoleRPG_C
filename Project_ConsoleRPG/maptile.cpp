#include "maptile.h"


MapTile::MapTile(int getal)
{

    switch(getal){

    case 1 :
        encounter = new Enemy("Troll");

       break;
    case 2 :
        encounter = new Enemy("wizzard");
        break;

    default:
         encounter = new Enemy("oke");
    break;
    }
}

void MapTile::PrintMap(QList<MapTile>  Map);

    out <<

}
