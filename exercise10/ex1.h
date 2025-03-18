#include <iostream>

using namespace std;

#ifndef PERSON_H
#define PERSON_H

class CandyBar
{
private:
    char name [20];
    double weight;
    int calories;

public:

    CandyBar(){ }

    void setCandyBar(){
        cout << "Enter brand name of a candy bar: ";
        cin.getline(this->name,20);
        cout << "Enter weight of the candy bar: ";
        cin >> this->weight;
        cout << "Enter calories (an integer) in the candy bar: ";
        cin >> this->calories;

    }

    void showCandyBar() const{
        cout << "Brand: " << name << endl;
        cout << "Weight: " << weight << endl;
        cout << "Calories: " << calories << endl;
    }
    
};

#endif