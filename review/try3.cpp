// 尝试c++中的string类
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1;
    string str2="doge";

    cin >> str1;
    cout << str1 << "  " << str2 << endl;
    cout << "the third letter in str2 is: " << str2[2] << endl;
    return 0;
}