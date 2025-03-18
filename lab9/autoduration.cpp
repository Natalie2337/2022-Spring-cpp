#include <iostream>
using namespace std;

int main()
{
    int x = 30;
    cout << " x in outer " << x << endl;
    {
        int x = 77;
        cout << " x in inner " << x << endl;
    }
    cout << " x in outer " << x << endl;
    //这个时候x还是30

    while(x++<33) //在这个while框里面，x用的是外面的x=30.然后执行x++
    {
        int x = 100;
        x++;
        cout << "x in while loop " << x << endl;
        //而在while框里面，x执行的是里面的新x，就比如x=100，x++
    }
    cout << "x after calculation " << x << endl;

}