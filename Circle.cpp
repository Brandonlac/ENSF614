// Circle.cpp
// ENSF 614 Fall 2022 LAB 5 - EXERCISE B
// Created by: Brandon Lac
// Submission Date: October 21 2023
#include "Circle.h"
using namespace std;
#include <iostream>
#include <math.h>
#include "Shape.h"

Circle::Circle(double x, double y, double r, const char *n) : Shape(x, y, n)
{
    radius = r;
}

double Circle::area() const
{
    return (M_PI * pow(radius, 2));
}

double Circle::perimeter() const
{
    return (M_PI * 2 * radius);
}

double Circle::getRadius() const
{
    return radius;
}

void Circle::setRadius(double r)
{
    radius = r;
}

void Circle::display()
{
    cout << "Circle Name: " << shapeName << endl;
    cout << "X-coordinate: " << origin.getx() << endl;
    cout << "Y-coordinate: " << origin.gety() << endl;
    cout << "Radius: " << radius << endl;
    cout << "Area: " << area() << endl;
    cout << "perimeter: " << perimeter() << endl;
}
