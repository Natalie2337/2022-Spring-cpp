#include <cstring>
#include "student1.h"
using namespace std;

int main()
{
    student record;

    record.id = 1;
    stpcpy(record.name, "Raju");
    record.score = 86.5;

    printstudent( &record);
    return 0;
}