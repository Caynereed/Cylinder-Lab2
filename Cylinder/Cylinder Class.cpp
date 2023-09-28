// Cylinder CPP File
#include <iostream>
#include <string>
#define Cylinder_C
#include "Cylinder Class.hpp"

// Class Definitions
class Cylinder;

Cylinder::Cylinder()
{
}

void Cylinder::setRadius(double radius_)
{
    radius = radius_;
    radius = 10;
}

double Cylinder::getRadius()
{
    return radius;
}


void Cylinder::setHeight(double height_)
{
    height = height_;
    height = 12;
}

double Cylinder::getHeight()
{
    return height;
}
