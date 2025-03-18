#include <iostream>
using namespace std;

int main()
{
    const char *msg = "C/C++ programming is fun.";
    const char *copy;

    copy = msg;

    cout << "msg=" << msg << ",its address is" << (void*)msg << ", &msg=" << &msg << endl;
    cout << "copy=" << msg << ",its address is" << (void*)copy << ", &copy=" << &copy << endl;
    //copy 与 msg 两个指针中存放的地址都是那个char 字符串，因此打印出copy与msg应该相同
    //然而 由于msg和copy是两个不同的变量，因此msg与copy它们的地址是不相同的！

}