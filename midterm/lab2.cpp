#include <iostream>
using namespace std;


unsigned int fb (unsigned int n);
int main()
{
    unsigned int n;
    cin >> n;

    
    cout << fb(n);

}

unsigned int fb (unsigned int n){
    if(n==1){
        return 1;
    }else if(n==2){
        return 1;
    }else{
        unsigned int f1 = 1;
        unsigned int f2 = 1;
        unsigned int fn;

        for (unsigned int i = 3; i <= n; i++)
        {
            fn=f2%3 + f1%3;
		    f2=f1%3;
		    f1=fn%3;
        }

        return fn%3;        
    }
}