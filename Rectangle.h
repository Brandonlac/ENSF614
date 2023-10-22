#ifndef Rectangle_H
#define Rectangle_H
#include "Square.h"
class Rectangle : public Square
{
public:
    Rectangle(double x, double y, double side_a,
              double side_b, char const *n);
    // Constructor
    double area() const;
    // PROMISES: returns the area of the rectangle.
    double perimeter() const;
    // PROMISES: returns the perimeter of the rectangle.
    void set_side_b(double b);
    // PROMISES: sets the value of side_b.
    double getSideB() const;
    // PROMISES: returns the value of side_b.
    void display() const;
    // PROMISES:  that prints on the screen the Rectangle’s name, x and y coordinates
    //            of point origin,side a,side_b, area, and perimeter in the following format:
    //            Rectangle Name:
    //            X-coordinate:
    //            Y-coordinate:
    //            side a:
    //            Area:
    //            Perimeter

protected:
    double side_b;
};

#endif