#include <iostream>
#include "candybar.h"

using namespace std;

int main()
{
    CandyBar candy_ptr;
    CandyBar candy_ref;

    set(&candy_ptr);
    show(&candy_ptr);

    set(candy_ref);
    show(candy_ref);

    return 0;
}
