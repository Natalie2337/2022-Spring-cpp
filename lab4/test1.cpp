#include <iostream>
using namespace std;

int main()
{
    int *p,var;
    p = &var;
    cout << &var << endl;

    cout << p << endl;

    cout << *p << endl;
    //这里得到的是var的值？？
    return 0;

}