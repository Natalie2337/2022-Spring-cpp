#include <iostream>
#include <string>
using namespace std;
struct CandyBar{
    string name;
    double weight;
    int calories;
    double calperweight;
};

int main()
{
    CandyBar struArr[3];
    cout << "please input three CandyBar's information: " << endl;

    for (int i = 0; i < 3; i++){
        cout << "enter the brand name of the candy bar: " ;
        cin.get();
        getline(cin,struArr[i].name,'\n');
        cout << "enter the weight: " ;
        cin >> (struArr[i].weight);
        cout << "enter the calories: ";
        cin >> (struArr[i].calories);
    }
    
}