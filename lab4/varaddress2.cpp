#include <iostream>
using namespace std;

int main()
{
    int var1 = 3;
    float var2 = 24.8f;
    double var3 = 23.42;

    cout << "Address of var1 is " << &var1 << "its value is" << var1 << endl;
    cout << "Address of var2 is " << &var2 << "its value is" << var2 << endl;
    cout << "Address of var3 is " << &var3 << "its vlaue is" << var3 << endl;

    return 0;
}