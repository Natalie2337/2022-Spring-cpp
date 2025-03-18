#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    printinfo();
    cout << "the factorial of " << N << "is: " << factorial(N) << endl;
    return 0;
}

//当它提示报错make: testfile is up to date 的时候，就随便在.cpp文件中打几个回车保存一下。