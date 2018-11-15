#ifndef PROJECTILE_H_
#define PROJECTILE_H_

enum DIRECTION {UP, RIGHT, DOWN, LEFT};

class Projectile
{

private:
    int m_x_coordinate;
    int m_y_coordinate;
    DIRECTION m_direction;
public:

    Projectile()
    {
        m_x_coordinate = -1;
        m_y_coordinate = -1;
    }

    //Getters
    int get_xCoordinate();
    int get_yCoordinate();
    DIRECTION get_direction();

    //Setters
    bool set_xCoordinate(int);
    bool set_yCoordinate(int);
    bool set_direction(DIRECTION);

};

#endif // PROJECTILE_H_
