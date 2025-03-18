#include <iostream>
#include "candybar.h"
using namespace std;

void set(CandyBar & cb)
{
    cout << "Call the set function of Passing by reference: " << endl;
    cout << "Enter brand name of a Candy bar: ";
    cin.getline(cb.brand,30);
    cout << "Enter weight of the Candy bar: ";
    cin >> cb.weight;
    cout << "Enter calories (an integer value) in the Candy bar: ";
    cin >> cb.calories;
    cin.get();
    cout << "\n" ;
}

void set(CandyBar * const cb)
{
    cout << "Call the set function of Passing by pointer: " << endl;
    cout << "Enter brand name of a Candy bar: ";
    cin.getline(cb->brand,30);
    cout << "Enter weight of the Candy bar: ";
    cin >> cb->weight;
    cout << "Enter calories (an integer value) in the Candy bar: ";
    cin >> cb->calories; 
    cin.get();
    cout << "\n";
}

void show(const CandyBar & cb)
{
    cout << "Call the show function of Passing by reference: " << endl;
    cout << "Brand: " << cb.brand << endl;
    cout << "Weight: " << cb.weight << endl;
    cout << "Calories: " << cb.calories << endl;
    cout << "\n" ;
}

void show(const CandyBar * cb)
{
    cout << "Call the show function of Passing by reference: " << endl;
    cout << "Brand: " << cb->brand << endl;
    cout << "Weight: " << cb->weight << endl;
    cout << "Calories: " << cb->calories << endl;
    cout << "\n" ;
}