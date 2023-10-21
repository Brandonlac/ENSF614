//  Point.cpp
// ENSF 614 Fall 2022 LAB 5 - EXERCISE A
#include "Point.h"
#include <iostream>
#include <cmath>

Point::Point(double x, double y)
{

    this->x = x;
    this->y = y;
    id = 1001;
}

double Point::getx() const
{
    return x;
}

double Point::gety() const
{
    return y;
}

void Point::setx(double x)
{

    this->x = x;
}

void Point::sety(double y)
{

    this->y = y;
}

double Point::distance(Point &p)
{
    return (pow(pow(abs(p.x - x), 2) + pow(abs(p.y - y), 2), 0.5));
}

double Point::distance(Point &p, Point &op)
{
    return (pow(pow(abs(p.getx() - op.getx()), 2) + pow(abs(p.gety() - op.gety()), 2), 0.5));
}