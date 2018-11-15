#ifndef MAPMODEL_H_
#define MAPMODEL_H_

#include "MapObject.h"

class MapModel
{

private:
    static MapModel *m_instance;
    int m_noOfPlayers;
    MapModel() : m_noOfPlayers(0)
    {
    }
    MapObject **mapObjects;

public:

    ~MapModel()
    {
        delete []mapObjects;
        delete m_instance;
    }
    void deleteMapObjects(int);
    int getNumberOfPlayers();
    MapModel* getInstance();
    MapObject **getMapObjects();
};


#endif // MAPMODEL_H_
