// Shape.h
// ENSF 614 Fall 2022 LAB 5 - EXERCISE A
// Created by: Brandon Lac
// Submission Date: October 21 2023
#ifndef Shape_H
#define Shape_H
#include "Point.h"
class Shape
{
public:
    Shape(double x, double y, char const *n);
    // Constructor

    virtual ~Shape();
    // Deconstructor

    Point getOrigin() const;
    // PROMISES: the object origin which is of type Point.

    char *getName() const;
    // PROMISES: returns the name of the shape.

    virtual void display() const;
    // PROMISES:  that prints on the screen the shape’s name, x and y coordinates
    //            of point origin, in the following format:
    //            Shape Name:
    //            X-coordinate:
    //            Y-coordinate:

    virtual double area() const = 0;

    virtual double perimeter() const = 0;

    double distance(Shape &other) const;
    // PROMISES: Returns the distance between this shape and other.

    static double distance(Shape &the_shape, Shape &other);
    // PROMISES: Returns the distance between two shapes provided by
    // the_shape and other.

    void move(double dx, double dy);
    // PROMISES: Changes the position of the shape, the current x and y coordinates to
    // x+dx, and y+dy.

protected:
    Point origin;
    char *shapeName;
};

#endif