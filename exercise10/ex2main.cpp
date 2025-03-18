#include <iostream>
#include "ex2.h"
using namespace std;

int main()
{
    Rectangle r1(4,40);
    cout << "Rectangle 1" << endl;
    cout << "--------------" << endl;
    r1.display();

    Rectangle r2(3.5,35.9);
    cout << "Rectangle 2" << endl;
    cout << "--------------" << endl;
    r2.display();

    return 0;
}