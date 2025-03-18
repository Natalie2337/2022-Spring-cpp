#include <iostream>
using namespace std;

int main()
{
    char *pc,cc = 'A';
    int *pi,ii = 25;
    float *pf,ff = 23.4f;
    double *pd,dd = 30.78;

    pc = &cc;
    pi = &ii;
    pf = &ff;
    pd = &dd;

    cout << "the size of cc is:" << sizeof(cc) << "\t the size of pc is:" <<sizeof(pc) << endl;
    cout << "the size of ii is:" << sizeof(ii) << "\t the size of pi is:" <<sizeof(pi) << endl;
    cout << "the size of ff is:" << sizeof(ff) << "\t the size of pf is:" <<sizeof(pf) << endl;
    cout << "the size of dd is:" << sizeof(dd) << "\t the size of pd is:" <<sizeof(pd) << endl;
    
    //所以所有指针的大小都是8个字节

    cout << "the address of cc is:" <<(void*)(&cc) << "\t" <<(void*)(pc) << endl;
    cout << "the address of ii is:" << &ii << "\t" << pi << endl;
    cout << "the address of ff is:" << &ff << "\t" << pf << endl;
    cout << "the address of dd is:" << &dd << "\t" << pd << endl;

    //通过指针来得到cc,ii等的值
    cout << "get the value of cc by pointer pc:" << *pc << endl;
    cout << "get the value of ii by pointer pi:" << *pi << endl;
    cout << "get the value of ff by pointer pf:" << *pf << endl;
    cout << "get the vlaue of dd by pointer pd:" << *pd << endl;

    return 0;
}
