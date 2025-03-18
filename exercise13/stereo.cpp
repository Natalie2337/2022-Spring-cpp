#include <iostream>
#include "stereo.h"
using namespace std;

int CStereoShape::numberOfObjects = 0;

double CStereoShape::GetArea()
{
    cout << "CStereoShape::GetArea()" << endl;
    return 0.0;
}

double CStereoShape::GetVolume()
{
    cout << "CStereoShape::GetVolume()" << endl;
    return 0.0;
}

void CStereoShape::show()
{
    cout << "CStereoShape::Show()" << endl;
}

int CStereoShape::GetNumOfObject(){
    return numberOfObjects;
}