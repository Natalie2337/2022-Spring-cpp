#include <iostream>
#include "function.h"

void swap_origin(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap(int & a, int & b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap(int * a, int * b)
{
    int temp;
    temp = *a; //把a 的值赋给temp
    *a = *b; //把b 的值赋给a
    *b = temp; //修改b的值为temp,即原来a的值
}