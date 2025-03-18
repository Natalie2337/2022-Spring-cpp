#include <iostream>
#include <new>
using namespace std;

struct CandyBar 
{
    string name;
    double weight;
    int calories;

};

int main()
{
    cout << "Please input three CandyBar's information: "  << endl;
    CandyBar *ptr1 = new CandyBar;
    CandyBar *ptr2 = new CandyBar;
    CandyBar *ptr3 = new CandyBar;


    cout << "Enter the brand name of the candy bar: " ;
    cin.get();
    getline(cin,ptr1->name,'\n') ;
    cout << "Enter the weight: ";
    cin >> (ptr1->weight);
    cout << "Enter the calories: ";
    cin >> (ptr1->calories);
    

    cout << "Enter the brand name of the candy bar: " ;
    cin.get();
    getline(cin,ptr2->name,'\n') ;
    cout << "Enter the weight: ";
    cin >> (ptr2->weight);
    cout << "Enter the calories: ";
    cin >> (ptr2->calories);

    cout << "Enter the brand name of the candy bar: " ;
    cin.get();
    getline(cin,ptr2->name,'\n') ;
    cout << "Enter the weight: ";
    cin >> (ptr3->weight);
    cout << "Enter the calories: ";
    cin >> (ptr3->calories);


    cout << "Displaying the candybar array content: " << endl;
    cout << "Brand name: " << (ptr1->name) << endl;
    cout << "Weight: " << (ptr1->weight) << endl;
    cout << "Calories: " << (ptr1->calories) << endl;
    cout << "Brand name: " << (ptr2->name) << endl;
    cout << "Weight: " << (ptr2->weight) << endl;
    cout << "Calories: " << (ptr2->calories) << endl;
    cout << "Brand name: " << (ptr3->name) << endl;
    cout << "Weight: " << (ptr3->weight) << endl;
    cout << "Calories: " << (ptr3->calories) << endl;

    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;

    



 
}