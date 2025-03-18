#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "enter a string "<< endl;
    cin.get(str,20);
    cout << "you entered: " << str << endl;

    cin.get();
    cout << "enter another string "<< endl;
    cin.get(str, 20);
    cout << "you entered: " << str << endl;

    return 0;
    
}