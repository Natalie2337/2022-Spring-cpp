#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
using namespace std;

class Rectangle{
private:
    double width = 1;
    double height = 1;

public:

    Rectangle();
    Rectangle(double wid, double hei){
        width = wid;
        height = hei;
    }

    double getArea(){
        return width;
    }
    double getPerimeter(){
        return 2*(width + height);
    }
    void display(){
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
        cout << "Area: " << this->getArea() << endl;
        cout << "Perimeter: " << this->getPerimeter() << endl;
    }

};


#endif