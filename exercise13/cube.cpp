#include "cube.h"
#include <iostream>
using namespace std;


CCube::CCube(double length, double width, double height)
{
    this->length = length;
    this->width = width;
    this->height = height;
}

double CCube::GetArea()
{
    return length * width;
}

double CCube::GetVolume()
{
    return length * width * height;
}

void CCube::show()
{
    cout << "Cube length: " << length << " " << "width: " << width << " " << "height: " << height << endl;
    cout << "Cube area: " << this->GetArea() << " " << "volume: " << this->GetVolume() << endl;
}

CCube::~CCube(){}