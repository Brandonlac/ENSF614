// CurveCut.cpp
// ENSF 614 Fall 2022 LAB 5 - EXERCISE B
// Created by: Brandon Lac
// Submission Date: October 21 2023
#include "Circle.h"
#include "Rectangle.h"
#include "CurveCut.h"
using namespace std;
#include <iostream>
#include <math.h>
CurveCut::CurveCut(double x, double y, double width, double length, double r, const char *n) : Shape(x, y, n), Circle(x, y, r, n), Rectangle(x, y, width, length, n)
{
    if (r > length || r > width)
    {
        cout << " Error, radius of circle cannot be greater than the length or width of the Rectangle";
        exit(0);
    }
}

double CurveCut::area() const
{
    return ((side_a * side_b - 0.25 * (pow(radius, 2) * M_PI)));
}
// PROMISES: to return the area of the rectangle minus the cut

double CurveCut::perimeter() const
{
    return (side_a * 2 + side_b * 2 - 2 * radius + (0.5 * M_PI * radius));
}
// PROMISES: to return the perimeter of the rectangle with the cur

void CurveCut::display()
{
    cout << "CurveCut Name: " << Circle::getName() << endl;
    cout << "X-coordinate: " << Circle::origin.getx() << endl;
    cout << "Y-coordinate: " << Circle::origin.gety() << endl;
    cout << "Radius: " << radius << endl;
    cout << "Area: " << area() << endl;
    cout << "perimeter: " << perimeter() << endl;
}
// PROMISES: to print the curvecut in the follow format:
// CurveCut Name:
// X-coordinate:
// Y-coordinate:
// Width:
// Length:
// Radius of the cut.