#include <iostream>
using namespace std;


int fb (unsigned int n);
int main()
{
    unsigned int n;
    cin >> n;

    int remain = fb(n)% 3;
    cout << remain ;

}

int fb (unsigned int n){
    if(n==1){
        return 1;
    }else if(n==2) {
        return 1;
    }else{
        return (fb(n-1)%3) + (fb(n-2)%3);
    }
}
