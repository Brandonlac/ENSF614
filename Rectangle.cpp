#include "Rectangle.h"
#include <string>
#include <iostream>
#include "Square.h"
using namespace std;

Rectangle::Rectangle(double x, double y, double side_a,
                     double side_b, char const *n) : Square(x, y, side_a, n)
{
    this->side_b = side_b;
}
double Rectangle::area() const
{
    return (this->side_a * this->side_b);
}
// PROMISES: returns the area of the rectangle.
double Rectangle::perimeter() const
{
    return (side_a * 2 + side_b * 2);
}
// PROMISES: returns the perimeter of the rectangle.
void Rectangle::set_side_b(double b)
{
    side_b = b;
}
// PROMISES: sets the value of side_b.
double Rectangle::getSideB() const
{
    return side_b;
}
// PROMISES: returns the value of side_b.
void Rectangle::display() const
{
    cout << "Rectangle Name: " << shapeName << endl;
    cout << "X-coordinate: " << origin.getx() << endl;
    cout << "Y-coordinate: " << origin.gety() << endl;
    cout << "side a: " << side_a << endl;
    cout << "side b: " << side_b << endl;
    cout << "Area: " << area() << endl;
    cout << "perimeter: " << perimeter() << endl;
}
// PROMISES:  that prints on the screen the Rectangle’s name, x and y coordinates
//            of point origin,side a,side_b, area, and perimeter in the following format:
//            Square Name:
//            X-coordinate:
//            Y-coordinate:
//            side a:
//            Area:
//            Perimeter
