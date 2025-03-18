#include <iostream>
using namespace std;

struct Employee
{
    string name;
    int age;
};

int main()
{
    Employee array[4];
    array[0].name="Natalie";
    array[0].age=20;
    array[1].name="Anna";
    array[1].age=12;
    array[2].name="Emily";
    array[2].age=38;
    array[3].name="Mariah";
    array[3].age=29;

    for(int i=0;i<4;i++)
        cout << "name " << array[i].name << "\t age " << array[i].age << endl;

    
    return 0;
}