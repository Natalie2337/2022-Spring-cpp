#include <iostream>
#include <new>
using namespace std;

struct Pizza
{
    char name [30];
    int diameter;
    double weight;
};

int main()
{
    Pizza *ptr = new Pizza;

    cout << "Enter the name of pizza company: ";
    cin.get(ptr->name,30);
    cout << "Enter the diameter of pizza (inches): ";
    cin >> (ptr->diameter);
    cout << "Enter the weight of the pizza (g): ";
    cin >> (ptr->weight);


    cout << "Displaying the information of the pizza" << endl;
    cout << "Company name: " << (ptr->name) << endl;
    cout << "Pizza diameter: " << (ptr->diameter) << " inches" << endl;
    cout << "Pizza weight: " << (ptr->weight) << " g" << endl;


    delete ptr;
    return 0;
}
