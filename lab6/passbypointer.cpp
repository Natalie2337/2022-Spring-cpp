#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int z;
    z = *x;
    *x = *y;
    *y = z;
}

int main()
{
    int a = 45, b = 35;
    swap(&a, &b);

    cout << "a = " << a << "  b = " << b << endl;

    return 0;
}