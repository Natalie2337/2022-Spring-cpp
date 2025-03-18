#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1;
    string str2 = "piggy";
    str1 = str2;

    string str3;
    str3 = str1 + str2;
    str1 += str2;

    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;
    cout << "str3: " << str3 << endl;

    return 0;
}
