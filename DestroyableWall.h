#ifndef DESTROYABLEWALL_H_
#define DESTROYABLEWALL_H_
#include "MapObject.h"

class DestroyableWall : public MapObject
{

private:
    int m_hitPoints;

public:
    DestroyableWall(int hitPoints) : m_hitPoints(hitPoints)
    {

    }

    int getHitPoints();
    void decreaseHitPoints(int);
};





#endif // DESTROYABLEWALL_H_
