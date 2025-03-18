#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main()
{
    char sports[3][24] = {"table tennos","football","swimming"};
    const char *books[3] = {"algorithms","c++ programming","design patterns"};

    cout << setw(10) << "sports" << setw(20) <<  "books" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << sports[i] << setw(35) << books[i] << endl;
    }
    
    //setw()控制输出字段宽度
}