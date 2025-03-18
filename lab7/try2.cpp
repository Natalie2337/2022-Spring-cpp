#include <iostream>
using namespace std;

struct demo
{
    int a ;
};

int main()
{
    int x = 5;
    int y = 6;
    demo d;

    int *p;
    p = &x;
    p = &y;//pointers reinitialization allowed

    int &r = x;
    r = y;

    p = NULL;
    //&r 相当于不可修改的值，不可放在左边

    p++;
    r++;
    cout << &p << " " << &x << endl;
    cout << &r << " " << &x << endl;

    demo *q = &d;
    demo &ref = d;

    q->a = 0;
    
    ref.a =0;

    cout << p << endl;
    cout << r << endl;

    return 0;

}

