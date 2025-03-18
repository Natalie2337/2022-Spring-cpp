#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double number, squareRoot;

    cout << "Enter a number:";
    cin >> number;

    squareRoot = sqrt(number);
    cout << "Square root of " << number << "=" << squareRoot << endl;

    return 0;
}