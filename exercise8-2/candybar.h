#ifndef EXC_CANDTBAR_H
#define EXE_CANDYBAR_H

#include <iostream>
const int LEN = 30;
struct CandyBar
{
    char brand[LEN];
    double weight;
    int calories;
};

void set(CandyBar & cb);
void set(CandyBar * cb);
void show(const CandyBar & cb);
void show(const CandyBar * cb);

#endif