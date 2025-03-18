#include <iostream>
using namespace std;

int main()
{
    int a=6, b=13, c=78;
    cout << "a > b ? " << (a > b) << ", b > c " << (b > c) << endl;
    cout << "a * b == c?" << (a*b == c) << endl;
    //在没有注明输出为boolalpha 之前，(a>b)运算得到的是数0(否)或1(是)

    cout << boolalpha;
    cout << "a > b ?" << (a > b) << ", b > c?" << (b > c) <<endl;
    cout << "a * b == c?" << (a*b == c) << endl;
    cout << "b-a = " << (b-a) << ", its boolean value" << (bool)(b-a) << endl;
    //在确定输出为boolalpha后，才是输出的布尔值

    return 0;
}