#include <iostream>
using namespace std;

int main()
{
    int len,arraystart;
    cin >> len;
    cin >> arraystart;

    int xo[1001];

    for (int i = 0; i < len; i++)
    {
        xo[i] = arraystart + 2*i;
        while(i!=len-1){
            cout << xo[i] << ",";
        }
        cout << xo[len-1] ;
        
    }
    return 0;

    int tot = xo[0];
    for (int i = 1; i < len; i++)
    {
        tot =  tot ^ xo[i];
        tot = tot >> 1;
    }
    cout << "\n";
    cout << tot ;
    

}