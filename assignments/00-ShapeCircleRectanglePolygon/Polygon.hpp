#pragma once
#include "Shape.hpp"

class Polygon: public Shape
{
public:
    Polygon();
    Polygon(int Valx, int Valy, int Valside);
    int getSide();
private:
    int side;
};