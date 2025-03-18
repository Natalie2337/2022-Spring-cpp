#include <iostream>
#include "student1.h"
using namespace std;

void printstudent(student *st)
{
    cout << "id is: " << st->id << endl;
    cout << "name is: " << st->name << endl;
    cout << "score is: " << st->score << endl;

}