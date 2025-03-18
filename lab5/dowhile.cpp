#include <iostream>
using namespace std;

int main()
{
    float number, sum =0.0;
    do{
        cout << "enter a number (0 to terminate)";
        cin >> number;
        sum += number;
    }while(number != 0);

    cout << "total sum = " << sum << endl;
}