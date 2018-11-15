#include "Projectile.h"

int Projectile::get_xCoordinate()
{
    return this->m_x_coordinate;
}


int Projectile::get_yCoordinate()
{
    return this->m_y_coordinate;
}


DIRECTION Projectile::get_direction()
{
    return this->m_direction;
}

bool Projectile::set_xCoordinate(int x)
{
    this->m_x_coordinate = x;

    return true;
}

bool Projectile::set_yCoordinate(int y)
{
    this->m_y_coordinate = y;

    return true;
}

bool Projectile::set_direction(DIRECTION d)
{
    this->m_direction = d;

    return true;
}
