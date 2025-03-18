#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "enter an integer between 5 and 8";
    cin >> num;

    switch(num)
    {
        case 5: cout << "5" << endl;
                //break;
        case 6: cout << "6" << endl;
                //break;
        case 7: cout << "7" << endl;
                //break;
        case 8: cout << "8" << endl;
                //break;
        default:cout << "default" << endl;
    }
}