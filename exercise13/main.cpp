#include <iostream>
#include "stereo.h"
#include "sphere.h"
#include "cube.h"
using namespace std;

int main()
{
    CCube a_cube(4.0, 5.0, 6.0);
    CSphere a_sphere(7.9);

    CStereoShape * p = & a_cube;
    p->show();
    
    p = & a_sphere;
    p->show();
    cout << CStereoShape::GetNumOfObject() << " objects are created." << endl;
}