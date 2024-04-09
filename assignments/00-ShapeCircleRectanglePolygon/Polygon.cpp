
#include "Polygon.hpp"


Polygon::Polygon()
{
    side = 0;
}
Polygon::Polygon(int Valx, int Valy, int Valside):Shape(Valx, Valy)
{
    side = Valside;
}

int Polygon::getSide()
{
    return side;
}   
