// Point.h
// ENSF 614 Fall 2022 LAB 5 - EXERCISE A

#ifndef Point
#define Point
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
    int counter() const;
    // PROMISES: to return the number of objects of class Point at anytime.

    static double distance();
    // PROMISES: to return the distance between 2 points.

    double distance();
    // PROMISES: to return the distance between 2 points.

    void display();
    // PROMISES: to display the x and y coordinates in the following format:
    // X-coordinate: ######.##
    // Y-coordinate: ######.##

    double getX() const;

    double getY() const;

    void setX(double x);

    void setY(double y);
};
#endif