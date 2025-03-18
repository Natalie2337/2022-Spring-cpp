#include <iostream>
using namespace std;

int x;
int main()
{
    int x = 256;
    cout << "local variable: " << x << endl;
    cout << "global variable: " << ::x << endl;
    //这里::x起到了屏蔽作用
    return 0;
}