#ifndef SHAPE_SPHERE_H
#define SHAPE_SPHERE_H
#define PI 3.14
#include "stereo.h"


class CSphere : public CStereoShape
{
private:
    double radius;
public:
    CSphere(double raduis);
    CSphere(){}
    CSphere(const CSphere&); // copy constructor
    double GetArea();
    double GetVolume();
    void show();

};



#endif