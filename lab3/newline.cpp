#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "enter a string: "<< endl;
    cin.getline(str,20);
    cout << "the string you entered is: "<< str << endl;

    cout << "enter a new string: "<< endl;
    cin.getline(str,20);
    cout << "the string you entered is: "<< str << endl;

    return 0;

}