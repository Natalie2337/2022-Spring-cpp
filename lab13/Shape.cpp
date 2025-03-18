#include <iostream>
#include "shape.h"
using namespace std;

int Shape::numberOfObjects = 0;

Formatting Shape::SetFormat() const
{
    Formatting f;
    f.flag = cout.setf(ios_base::fixed, ios_base::floatfield);
    f.pr = cout.precision(3);
    return f;
}

void Shape::Restore(Formatting& f) const
{
    cout.setf(f.flag, ios_base::floatfield);
    cout.precision(3);
}