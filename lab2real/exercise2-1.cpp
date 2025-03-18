#include <iostream>

using namespace std;

int main()
{
    cout<<"Result"<<endl;
    cout<<" x value y value Expressions"<< " Result"<< endl;
    int x=10;
    int y=5;
    cout<< x << "|\t" << y << "|\t" << "x=y+3\t\t" << "|x=" << y+3 << endl;
    cout<< x << "|\t" << y << "|\t" << "x=y-2\t\t" << "|x=" << y-2 << endl;
    cout<< x << "|\t" << y << "|\t" << "x=y*5\t\t" << "|x=" << y*5 << endl;
    cout<< x << "|\t" << y << "|\t" << "x=x/y\t\t" << "|x=" << x/y << endl;
    cout<< x << "|\t" << y << "|\t" << "x=x%y\t\t" << "|x=" << x%y << endl;

    return 0;
}