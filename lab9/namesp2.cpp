//在这个cpp中，专门实现.h文件中的函数。
#include <iostream>
#include "namesp2.h"
namespace pigs{
    using std::cout;
    using std::endl;
    using std::cin;

    void getPig(WildPig & peppa)
    {
        cout << "enter pig's head size: ";
        cin >> peppa.pighead;
        cout << "enter pig's nose size: ";
        cin >> peppa.pignose;

    }
}