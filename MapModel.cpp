#include "MapModel.h"

MapModel* MapModel::m_instance = new MapModel();

MapModel* MapModel::getInstance()
{
    if ( !m_instance )
    {
        m_instance = new MapModel();
    }
    return m_instance;
}

/*bool MapModel::initializeMap(int noOfPlayers)
{
    this->m_noOfPlayers = noOfPlayers;
    this->mapObjects = new MapObject*[noOfPlayers*4]();
    for(int i = 0; i < noOfPlayers*4; ++i)
    {
        this->mapObjects[i] = new MapObject[noOfPlayers*4];
    }

    //Map obstacles logic

    return true;
}*/

void MapModel::deleteMapObjects(int sizeOfMap)
{
    for( int i=0; i < sizeOfMap; i++)
    {
        delete (*this->mapObjects + i);
    }
}

MapObject **MapModel::getMapObjects()
{
    return this->mapObjects;
}
