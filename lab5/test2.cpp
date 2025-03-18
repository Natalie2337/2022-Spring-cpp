#include <iostream>
using namespace std;

int main()
{
    float richter;

    cout << "please input the richter of the earthquake";
    cin >> richter;

    if(richter>=4.5)
        cout << "damage to a unihorn" << endl;
    else if(richter>=6.0)
        cout << "damage to a crocodile"  << endl;
    else if(richter>=7.0)
        cout << "damage to a dinosaur" << endl;
    else 
        cout << "damage to a dog" << endl;

    return 0;
}