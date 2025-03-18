#include <iostream>
using namespace std;

void Swap(int &, int&);
void Swap(double &, double &);

int main()
{
    int i = 10, j = 20;
    cout << "Before swap: i = " << i << " , j = " << j << endl;
    Swap(i,j);
    cout << "After swap: i = " << i << " , j = " << j << endl;

    double x = 10, y = 20;
    cout << "Before swap: x = " << x << " , y = " << y << endl;
    Swap(x,y);
    cout << "After swap: x = " << x << " , y = " << y << endl;

    return 0;
}

void Swap(int  &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void Swap(double  &a, double &b)
{
    double temp;
    temp = a;
    a = b;
    b = temp;
}