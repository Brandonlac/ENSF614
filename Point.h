// Point.h
// ENSF 614 Fall 2022 LAB 5 - EXERCISE A

#ifndef Point_H
#define Point_H
/* The following class definition represnets Complex Numbers and contains two
 * private data members called realM (the real part of a complex number),
 * and imagM (the imaginary part of a complex number).
 */
class Point
{
private:
    double x;
    double y;
    int id;

public:
    Point(double x, double y);
    // Constructor
    int counter() const;
    // PROMISES: to return the number of objects of class Point at anytime.

    static double distance(Point &p, Point &op);
    // PROMISES: to return the distance between 2 points.

    double distance(Point &p);
    // PROMISES: to return the distance between 2 points.

    void display();
    // PROMISES: to display the x and y coordinates in the following format:
    // X-coordinate: ######.##
    // Y-coordinate: ######.##

    double getx() const;
    // PROMISES to retrieve the x value of point

    double gety() const;
    // PROMISES to retrieve the y value of point

    void setx(double x);
    // PROMISES to set the x value of point

    void sety(double y);
    // PROMISES to set the y value of point
};
#endif