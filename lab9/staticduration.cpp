#include <iostream>
using namespace std;

void trystat();
int main()
{
    for(int count=1; count<=3; count++)
    {
        cout << "here comes iteration " << count << " \n";
        trystat();
    }

    return 0;
}

void trystat()
{
    int fade = 1;
    static int stay=1;

    cout << "fade= " << fade++ << " and stay = " << stay++ << endl;
}

