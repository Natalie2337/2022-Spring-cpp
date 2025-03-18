#include <iostream>
#include "function.h"

int main()
{
    int a1 = 3, b1 = 5;

    std::cout << " before swap : " << "a1 = " << a1 << " b1 = " << b1 << std::endl;
    swap_origin(a1,b1);
    std::cout << " after swap : " << "a1 = " << a1 << " b1 = " << b1 << std::endl;

    int a2 = 3, b2 = 5;
    int & a2_ref = a2;
    int & b2_ref = b2;

    std::cout << " before swap by reference: " << "a2 = " << a2 << " b2 = " << b2 << std::endl;
    swap(a2_ref,b2_ref);
    std::cout << " after swap by reference: " << "a2 = " << a2 << " b2 = " << b2 << std::endl;


    int a3 = 3, b3 = 5;
    int * a3_ptr = & a3;
    int * b3_ptr = & b3;

    std::cout << " before swap by pointer: " << "a3 = " << a3 << " b3 = " << b3 << std::endl;
    swap(a3_ptr,b3_ptr);
    std::cout << " after swap by pointer: " << "a3 = " << a3 << " b3 = " << b3 << std::endl;
    
}