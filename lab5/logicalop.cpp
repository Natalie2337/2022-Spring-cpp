#include <iostream>
using namespace std;

int main()
{
    int a=0, b=3, c=10;
    cout << "(a && b)=" << (a && b) << ",(a||b) =" << (a||b) << endl;
    cout << boolalpha;
    cout << "(a && b)=" << (a && b) << ",(a||b) =" << (a||b) << endl;
    cout << noboolalpha;
    cout << "(a && b)=" << (a && b) << ",(a||b) =" << (a||b) << endl;
}