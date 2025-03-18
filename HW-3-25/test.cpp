#include <iostream>
using namespace std;
int main()
{
    char *p = "abcdefgh", *r; 

    int *q = (int *)p; 

    q++; 

    r = (char *)q; 

    cout << r << endl;
};