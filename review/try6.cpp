#include <iostream>
using namespace std;

int main()
{
    int * pArray = NULL , *t;
    pArray = new int [10];
    if(pArray == NULL){
        cout << "allocation failure.\n";
        exit(0);
    }

    for (int i = 0; i < 10; i++){
        pArray[i] = 100+i;
    }

    cout << "displaying the array content" <<endl;
    for (t = pArray; t<pArray + 10; t++){
        cout << *t << " ";
    }

    delete [] pArray ;
    return 0;    
}