#include <iostream>
using namespace std;

//declare function prototype:
int sum(int x, int y);

int main()
{
    int a=10;
    int b=10;
    int c;

    c = sum(a,b);

    cout << c << endl;
}

int sum(int x, int y)
{
    int s = x + y;
    return s;
}