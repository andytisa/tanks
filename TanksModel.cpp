#include "TanksModel.h"

int TanksModel::get_xCoordinate()
{
    return this->m_xCoordinate;
}


int TanksModel::get_yCoordinate()
{
    return this->m_yCoordinate;
}

bool TanksModel::addProjectile(int x, int y, DIRECTION d)
{
    for (int i=0; i<TanksModel::TOTAL_PROJECTILES; i++){
            if ( m_projectile[i].get_xCoordinate() == -1 || m_projectile[i].get_yCoordinate() == -1 )
            {
                m_projectile[i].set_xCoordinate(x);
                m_projectile[i].set_yCoordinate(y);
                m_projectile[i].set_direction(d);
            }
    }
    return true;
}

Projectile* TanksModel::getProjectiles()
{
    return this->m_projectile;
}

bool TanksModel::set_yCoordinate(int y)
{
    this->m_yCoordinate = y;
    return true;
}

bool TanksModel::set_xCoordinate(int x)
{
    this->m_xCoordinate = x;
    return true;
}

int TanksModel::getHitPoints()
{
    return this->m_hitPoints;
}

void TanksModel::decreaseHitPoints(int no)
{
    if (no <= this->m_hitPoints)
    {
        this->m_hitPoints -= no;
    }
}
