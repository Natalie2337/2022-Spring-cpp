#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    int temp;
    temp =x;
    x = y;
    y = temp;
}

int main()
{
    int a = 45, b = 35;
    cout << "Before swap:" << endl;
    cout << "a=" << a << ",b=" << b << endl;

    swap(a,b);

    cout << "After swap:" << endl;
    cout << "a=" << a << ",b=" << b << endl;

    return 0;
}