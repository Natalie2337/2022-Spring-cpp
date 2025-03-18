#include <iostream>
#include <string.h>
using namespace std;

struct student
{
    int id;
    char name[20];
    float score;
};

void printstudent(student *record);
//这次尝试传structure的指针

int main()
{
    student record;

    record.id = 1;
    stpcpy(record.name, "Raju");
    record.score = 86.5;

    printstudent(&record);
    return 0;
}

void printstudent(student *st)
{
    cout << "id is: " << st->id << endl;
    cout << "name is: " << st->name << endl;
    cout << "score is: " << st->score << endl;
}