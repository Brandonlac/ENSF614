//  Point.cpp
// ENSF 614 Fall 2022 LAB 5 - EXERCISE A
#include "Point.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int Point::count = 0;
Point::Point(double x, double y)
{

    this->x = x;
    this->y = y;
    count++;
    id = 1000 + count;
}

void Point::display() const
{
    cout
        << "X-coordinate: " << setw(9) << setfill('0') << std::fixed << std::setprecision(2) << x << endl;
    cout << "Y-coordinate: " << setw(9) << setfill('0') << std::fixed << std::setprecision(2) << y << endl;
}

int Point::counter()
{
    return count;
}

int Point::getid() const
{
    return id;
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