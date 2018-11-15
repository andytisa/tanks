#ifndef TANKSMODEL_H_
#define TANKSMODEL_H_

#include "MapObject.h"
#include "Projectile.h"

class TanksModel : public MapObject
{

private:
    int m_xCoordinate;
    int m_yCoordinate;
    Projectile *m_projectile;
    int m_hitPoints;

public:
    const static int TOTAL_PROJECTILES = 5;
    const static int TOTAL_HIT_POINTS = 5;
    TanksModel(int x, int y) : m_xCoordinate(x), m_yCoordinate(y)
    {
        this->m_projectile = new Projectile[TOTAL_PROJECTILES];
    }

    //Getters
    int get_xCoordinate();
    int get_yCoordinate();
    Projectile *getProjectiles();
    int getHitPoints();
    //Setters
    bool set_xCoordinate(int);
    bool set_yCoordinate(int);

    bool addProjectile(int, int, DIRECTION);
    void decreaseHitPoints(int);

};



#endif // TANKSMODEL_H_
