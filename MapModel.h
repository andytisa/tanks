#ifndef MAPMODEL_H_
#define MAPMODEL_H_

#include "MapObject.h"
#include "DestroyableWall.h"
#include "Projectile.h"
#include "TanksModel.h"

class MapModel
{

private:
    static MapModel *m_instance;
    int m_noOfPlayers;
    MapModel() : m_noOfPlayers(0), mapObjects(0)
    {

    }
    MapObject ***mapObjects;

public:

    ~MapModel()
    {
        delete []mapObjects;
        delete m_instance;
    }
    void deleteMapObjects(int);

    //Getters
    int getNumberOfPlayers();
    static MapModel* getInstance();
    MapObject ***getMapObjects();

    //Setters
    void setNumberOfPlayers(int);
};


#endif // MAPMODEL_H_
