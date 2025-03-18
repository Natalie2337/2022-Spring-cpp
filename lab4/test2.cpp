#include <iostream>
using namespace std;

int main()
{
    int * pArray = NULL;
    pArray = new int[10];

    if(pArray == NULL)
    {
        cout << "Allocation failure \n";
        exit(0);
    }

    for (int i = 0; i < 10; i++)
    {
        pArray[i] = 20+i;
    }

    cout << "displaying the array" << endl;
    for (int i = 0; i < 10; i++,pArray++)
    {
       cout << *pArray << " ";
    }

    delete[] pArray;
    
    return 0;
    
}