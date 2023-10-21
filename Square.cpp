#include "Square.h"
#include <cstring>
#include <iostream>
#include "Shape.h"
using namespace std;

Square::Square(double x, double y, double side, const char *s) : Shape(x, y, s)
{
    side_a = side;
}

double Square::area() const
{
    return side_a * side_a;
}
// PROMISES: returns the area of the sqaure.

double Square::perimeter() const
{
    return 4 * side_a;
}
// PROMISES: returns the perimeter of the square.

void Square::set_side_a(double side)
{
    this->side_a = side;
}
// PROMISES: sets the side_a

double Square::getSideA() const
{
    return side_a;
}
// PROMISES: returns the value of side_a.

void Square::display() const
{
    cout << "Square Name: " << getName() << endl;
    cout << "X-coordinate: " << origin.getx() << endl;
    cout << "Y-coordinate: " << origin.gety() << endl;
    cout << "side a: " << side_a << endl;
    cout << "Area: " << this->area() << endl;
    cout << "perimeter: " << this->perimeter() << endl;
}
// PROMISES:  that prints on the screen the Square’s name, x and y coordinates
//            of point origin,side a, area, and perimeter in the following format:
//            Shape Name:
//            X-coordinate:
//            Y-coordinate:
//            side a:
//            Area:
//            Perimeter