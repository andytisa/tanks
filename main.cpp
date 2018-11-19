#include <iostream>
#include "GenerateMap.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>
using namespace std;

int main()
{
    srand (time(NULL));
    GenerateMap *generateMap = new GenerateMap(NUMBER_OF_PLAYERS);
    generateMap->generateMapElements();
    MapObject ***mapObjects = MapModel::getInstance()->getMapObjects();


    for (int i = 0; i < NUMBER_OF_PLAYERS*NUMBER_OF_SQUARES_PER_TANK; i++)
    {
        for (int j = 0; j < NUMBER_OF_PLAYERS*NUMBER_OF_SQUARES_PER_TANK; j++)
        {
            MapObject* m = *(*(mapObjects + i) + j);
            if (dynamic_cast<DestroyableWall*>(m))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }



    return 0;

}
