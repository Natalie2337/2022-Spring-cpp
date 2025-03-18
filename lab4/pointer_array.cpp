#include <iostream>
using namespace std;

int main()
{
    float arr[5];
    float *ptr;

    cout << "Displaying address using array: " << endl;
    
    for (int i = 0; i < 5; i++)
    {
        cout << "&arr["<< i <<"]" << &arr[i] << endl;
        //通过数组名字来访问每个元素的地址
    }

    cout << "Displaying address using pointer: " << endl;
    ptr = arr;
    for (int i = 0; i < 5; i++)
    {
        cout << "ptr + "<< i << " = "  <<  ptr +i << endl;
        //通过指针来访问每个元素的地址
    }

    for(int i=0; i<5; i++)
        arr[i] = i*2;
        //for 循环允许下一行不用加括号
    

    cout << "Displaying the value of elements using pointer: " << endl;
    for(int i=0; i<5; i++)
        cout << "(* ptr + " << i << ")= \t" << *(ptr+i) << endl;
    //通过*pointer的办法来通过指针获取数组中的每个元素

    return 0;

}