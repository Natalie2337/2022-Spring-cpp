#include <iostream>
using namespace std;

int main()
{
    double *pvalue = NULL;
    pvalue = new double;
    *pvalue = 1290.48;
    //这里是直接通过指针来操作它的值，这个值没有变量名字

    cout << "value of pvaluez:" << *pvalue << endl;

    delete pvalue;
    //记得最后要释放内存

    return 0;
}