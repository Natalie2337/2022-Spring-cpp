#include <iostream>
using namespace std;

void passbyval(int n)
{
    cout << "Pass by value---the operation address of the function is: " << &n << endl;
    n++;
}

void passbypoi(int *n)
{
    cout << "Pass by pointer---the operation address of the function is: " << n << endl;
    *n++;
}

void passbyref(int &n)
{
    cout << "Pass by reference---the operation address of the function is: " << &n <<endl;
    n++;
}

int main()
{
    int n = 10;
    cout << "The address of the argument is: " << &n << endl;

    passbyval(n);
    cout << "After calling passbyval, n = " << n << endl;

    passbypoi(&n);
    cout << "After calling passbypoi, n = " << n << endl;

    passbyref(n);
    cout << "After calling passbyref, n = " << n << endl;

    return 0;

}