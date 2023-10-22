// CurveCut.h
// ENSF 614 Fall 2022 LAB 5 - EXERCISE B
// Created by: Brandon Lac
// Submission Date: October 21 2023
#ifndef CurveCut_H
#define CurveCut_h
#include "Circle.h"
#include "Rectangle.h"

class CurveCut : public Circle, public Rectangle
{
public:
    CurveCut(double x, double y, double width, double length, double r, const char *n);
    // Constructor of class

    double area() const override;
    // PROMISES: to return the area of the rectangle minus the cut

    double perimeter() const override;
    // PROMISES: to return the perimeter of the rectangle with the cur

    void display();
    // PROMISES: to print the curvecut in the follow format:
    // CurveCut Name:
    // X-coordinate:
    // Y-coordinate:
    // Width:
    // Length:
    // Radius of the cut.
};
#endif