//  Point.cpp
// ENSF 614 Fall 2022 LAB 5 - EXERCISE A
#include "Point.h"
#include <iostream>

Point::Point(double x, double y) : x(x),
                                   y(y), id(1001)
{
}

double Point::getX() const
{
    return x;
}

double Point::getY() const
{
    return y;
}

void Point::setX(double x)
{

    x = x;
}

void Point::setY(double y)
{

    y = y;
}
