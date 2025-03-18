#include <iostream>
using namespace std;

struct Distance
{
    int feet;
    double inch;
};

int main()
{
    Distance *ptr,d;
    ptr = &d;

    cout << "please try to use the pointer for the structure:" << endl;
    cout << "enter feet:" << endl;
    cin >> ptr->feet;
    cout << "enter inch:" << endl;
    cin >> ptr->inch;

    cout << "distance = " << ptr->feet << "feets\t" << ptr->inch << "inches" << endl;

    return 0;


}