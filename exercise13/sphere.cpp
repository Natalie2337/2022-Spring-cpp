#include <iostream>
#include "sphere.h"
using namespace std;


CSphere::CSphere(double radius)
{
    this->radius = radius;
}

CSphere::CSphere(const CSphere & c)
{
    radius = c.radius;
}

double CSphere::GetArea()
{ 
    return PI * radius * radius;
}

double CSphere::GetVolume()
{
    return (4/3)* PI * radius * radius * radius;
}

void CSphere::show()
{
    cout << "Sphere radius: " << radius << endl; 
    cout << "surface area: " << this->GetArea() << " " << "volume: " << this->GetVolume() << endl;  
}