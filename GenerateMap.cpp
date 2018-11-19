#include "GenerateMap.h"
#include <stdlib.h>     /* srand, rand */

bool GenerateMap::generateMapElements()
{
    int numberOfPlayers = MapModel::getInstance()->getNumberOfPlayers();
    MapObject ***mapObjects = MapModel::getInstance()->getMapObjects();

    for (int i = 0; i < numberOfPlayers*NUMBER_OF_SQUARES_PER_TANK; i++)
    {
        for (int j = 0; j < numberOfPlayers*NUMBER_OF_SQUARES_PER_TANK; j++)
        {
            *(*(mapObjects + i) + j) = randomiseElement();
        }
    }
    return true;
}


MapObject* GenerateMap::randomiseElement()
{
    int number = rand() % 2;
    switch(number)
    {
    case 1:
        return new DestroyableWall(WALL_HEALTH);
        break;
    default:
        return new MapObject();
        break;
    }
}
