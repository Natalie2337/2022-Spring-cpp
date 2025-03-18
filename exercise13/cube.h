#include <iostream>
#include "stereo.h"
#ifndef SHAPE_CUBE_H
#define SHAPE_CUBE_H

class CCube : public CStereoShape
{
private:
    double length;
    double width;
    double height;

public:
    CCube(){}
    CCube(double length, double width, double height);
    double GetArea();
    double GetVolume();
    void show();
    ~CCube();
};


#endif