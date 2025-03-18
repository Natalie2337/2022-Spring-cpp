#ifndef SHAPE_STEREO_H
#define SHAPE_STEREO_H
#include <iostream>

class CStereoShape
{
private:
    static int numberOfObjects;

public:
    virtual double GetArea();
    virtual double GetVolume();
    virtual void show();
    static int GetNumOfObject();
    CStereoShape(){numberOfObjects++;}
};

#endif