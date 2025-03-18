#include <iostream>
using namespace std;

int main()
{
    int *pc,c;
    c = 5;

    cout << "Address of c " << &c << endl;
    cout << "Value of c " << c << endl;

    pc = &c;
    cout << "Address that pointer pc holds " << pc << endl;
    cout << "Content of the address pointer pc holds " << *pc << endl;

    *pc = c;
    //修改了c的值
    cout << "Address of c " << &c << endl;
    cout << "Value of c " << c << endl;

    return 0;
}