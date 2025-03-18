#pragma once

#include <iostream>
#include <cmath>
#include "Point.h"

class Line
{
private:
    Point p1,p2;
    double distance;

public:
    Line(Point xp1, Point xp2);
    Line(Line & q);
    double getDistance() const {return distance;}
};

Line::Line(Point xp1, Point xp2) : p1(xp1),p2(xp2)
{
    double x = p1.getX() - p2.getX();
    double y = p1.getX() - p2.getX();

    distance = sqrt(x*x + y*y);
}

Line::Line(Line& q):p1(q.p1),p2(q.p2)
{
    distance = q.distance;
}
