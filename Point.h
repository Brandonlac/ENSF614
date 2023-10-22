// Point.h
// ENSF 614 Fall 2022 LAB 5 - EXERCISE A

#ifndef Point_H
#define Point_H

class Point
{
private:
    double x;
    double y;
    int id;
    static int count; // Static variable to keep track of how many points have been created

public:
    Point(double x, double y);
    // Constructor
    static int counter();
    // PROMISES: to return the number of objects of class Point at anytime.

    static double distance(Point &p, Point &op);
    // PROMISES: to return the distance between 2 points.

    double distance(Point &p);
    // PROMISES: to return the distance between 2 points.

    void display() const;
    // PROMISES: to display the x and y coordinates in the following format:
    // X-coordinate: ######.##
    // Y-coordinate: ######.##

    double getx() const;
    // PROMISES to retrieve the x value of point

    int getid() const;
    // PROMISES to retrieve the id value of point

    double gety() const;
    // PROMISES to retrieve the y value of point

    void setx(double x);
    // PROMISES to set the x value of point

    void sety(double y);
    // PROMISES to set the y value of point
};
#endif