#include <iostream>
using namespace std;

int main()
{
    int * pArray = NULL, *t;
    pArray = new int[10];
    
    for (int i=0 ; i<10; i++)
        pArray[i] = 20 + i;

    cout << "displaying the array content" << endl;
    for(t =  pArray; t < pArray+10 ; t++)
        cout << *t <<" ";

    delete[] pArray;
    //注意这里我的指针pArray并没有移动，只是t在移动，因此最后可以delete掉pArray
    //而如果我移动的是pArray,那么最后delete掉pArray是很危险的！

    return 0;
    //申请内存后一定要手动放掉它
}