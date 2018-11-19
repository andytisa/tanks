#include "MapModel.h"



class GenerateMap{

private:

public:
    GenerateMap(int noOfPlayers)
    {
        MapModel::getInstance()->setNumberOfPlayers(noOfPlayers);
    }

    bool generateMapElements();

private:
    MapObject* randomiseElement();

};
