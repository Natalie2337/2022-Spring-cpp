#pragma once

class Point{
private:
    double x,y;

public:
    Point(double newX, double newY)
    {
        x = newX;
        y = newY;
    }

    Point(Point & p);

    double getX() const {return x;}
    double getY() const {return y;}
};

Point::Point(Point & p)
{
    x = p.x;
    y = p.y;
}