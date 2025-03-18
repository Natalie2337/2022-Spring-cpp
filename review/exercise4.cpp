#include <iostream>
using namespace std;

int main()
{
    double *pvalue = NULL;
    pvalue = new double;

    *pvalue = 1234.5;

    cout << "Value of pvalue: " << *pvalue << endl;
    delete pvalue;
    
    return 0;
}