#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle
{
private:
    double width;
    double height;

public:
    Rectangle();
    Rectangle(double w, double h);
    ~Rectangle();

    double getArea();
    double getWidth();
    double getHeight();
    void setWidth(double w);
    void setHeight(double h);

};
#endif