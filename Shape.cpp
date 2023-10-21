#include "Shape.h"
#include <cstring>
#include <string>
#include <iostream>
#include <cmath>
#include "Point.h"
using namespace std;
Shape::Shape(double x, double y, char const *n) : origin(x, y)
{
    this->shapeName = new char[sizeof(n)];
    strcpy(shapeName, n);
}

Shape::~Shape()
{
    delete[] shapeName;
}

Point Shape::getOrigin() const
{
    return origin;
}

char *Shape::getName() const
{
    return this->shapeName;
}

void Shape::display() const
{
    cout << "Shape Name: " << this->shapeName << endl;
    cout << "X-coordinate: " << this->origin.getx() << endl;
    cout << "Y-coordinate: " << this->origin.gety() << endl;
}

double Shape::distance(Shape &other) const
{
    return (pow(pow(abs(other.origin.getx() - origin.getx()), 2) + pow(abs(other.origin.gety() - origin.gety()), 2), 0.5));
}

double Shape::distance(Shape &the_shape, Shape &other)
{
    return (pow(pow(abs(other.origin.getx() - the_shape.origin.getx()), 2) + pow(abs(other.origin.gety() - the_shape.origin.gety()), 2), 0.5));
}

void Shape::move(double dx, double dy)
{
    origin.setx(origin.getx() + dx);
    origin.sety(origin.gety() + dy);
}