#include <iostream>
using namespace std;

struct Person
{
    char name[20];
    int age;
    float salary;

};

int main()
{
    Person person =
    {
        "Glorious Gloria",
        23,
        103.9
    };

    cout << "\n Displaying information of person " << endl;
    cout << "name: " << person.name <<endl;
    cout << "age: " << person.age << endl;
    cout << "salary: " << person.age <<endl;

    return 0;
}