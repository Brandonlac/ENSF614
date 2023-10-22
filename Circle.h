// Circle.h
// ENSF 614 Fall 2022 LAB 5 - EXERCISE B
// Created by: Brandon Lac
// Submission Date: October 21 2023
#ifndef Circle_H
#define Circle_H
#include "Shape.h"
class Circle : virtual public Shape
{
public:
    Circle(double x, double y, double r, const char *n);
    // Constructor of the circle class
    double area() const override;
    // PROMISES: to return the area of the circle.

    double perimeter() const override;
    // PROMISES: to return the perimeter of the circle.

    double getRadius() const;
    // PROMISES: to return the radius of the circle.

    void setRadius(double r);
    // PROMISES: to set the radius of the circle.

    void display();
    // PROMISES: to display circle's properties in the following format:
    //            Circle Name:
    //            X-coordinate:
    //            Y-coordinate:
    //            Radius:
    //            Area:
    //            Perimeter

protected:
    double radius;
};
#endif