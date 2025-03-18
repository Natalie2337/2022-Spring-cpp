#pragma once

struct student
{
    int id;
    char name[20];
    float score;
};

void printstudent(student *record);