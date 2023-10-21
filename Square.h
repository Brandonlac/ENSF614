#ifndef Square_H
#define Square_H
#include "Shape.h"
class Square : public Shape
{
public:
    Square(double x, double y, double side, const char *s);
    // Constructor
    virtual double area() const;
    // PROMISES: returns the area of the sqaure.

    virtual double perimeter() const;
    // PROMISES: returns the perimeter of the square.

    void set_side_a(double side);
    // PROMISES: sets the value of side_a.

    double getSideA() const;
    // PROMISES: returns the value of side_a.

    virtual void display() const;
    // PROMISES:  that prints on the screen the Square’s name, x and y coordinates
    //            of point origin,side a, area, and perimeter in the following format:
    //            Square Name:
    //            X-coordinate:
    //            Y-coordinate:
    //            side a:
    //            Area:
    //            Perimeter

protected:
    double side_a;
};

#endif