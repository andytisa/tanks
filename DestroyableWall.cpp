#include "DestroyableWall.h"

int DestroyableWall::getHitPoints()
{
    return this->m_hitPoints;
}

void DestroyableWall::decreaseHitPoints(int no)
{
    if (no <= this->m_hitPoints)
    {
        this->m_hitPoints -= no;
    }
}
