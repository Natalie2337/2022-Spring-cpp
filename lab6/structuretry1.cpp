#include <iostream>
#include <string.h>
using namespace std;

struct student 
{
    int id;
    char name[20];
    float score;
};

void printstd(student raju);

int main()
{
    student raju;

    raju.id = 1;
    stpcpy(raju.name, "Raju");
    raju.score = 86.5;

    printstd(raju);

    return 0;
}

void printstd(student pupil)
{
    cout << "id : " << pupil.id << endl;
    cout << "name : " << pupil.name << endl;
    cout << "score : " << pupil.score << endl;
}