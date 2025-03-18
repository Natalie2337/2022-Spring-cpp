#include <iostream>
using namespace std;

struct CandyBar
{
    char name [30];
    double weight;
    int calories;
};

int main(){
    CandyBar candybar ;

    cout << "Enter the brand name of the candy bar: " ;
    cin.get(candybar.name,30);
    cout << "Enter the weight of the candy bar: ";
    cin >> candybar.weight;
    cout << "Enter the calories (an integer value) in the Candy bar: ";
    cin >> candybar.calories;

    cout << "Brach: " << candybar.name << endl;
    cout << "Weight: " << candybar.weight << endl;
    cout << "Calories: " << candybar.calories << endl;

    return 0;
    
}