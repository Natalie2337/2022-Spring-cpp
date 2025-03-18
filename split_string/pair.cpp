#include "pair.h"

#include <iostream>
#include <algorithm>

using namespace std;


Pair* splitPair(string s, int& length) {
    // TODO finish this function, do not modify the parameters
    Pair * pair_ptr;
    pair_ptr = new Pair[s.length()];
    int count1 = 0;

    while(s.length()>=3){

        pair_ptr[count1].char1 = s[0];
        pair_ptr[count1].char2 = s[2];
        count1 = count1 + 1;

        bool bigger_four = false;

        if(s.length()>=4)
        {
            pair_ptr[count1].char1 = s[1];
            pair_ptr[count1].char2 = s[3];
            count1 = count1 + 1;
            bigger_four = true;
        }
 
        if(bigger_four==true){
            s.erase(3,1);
            s.erase(2,1);
            s.erase(1,1);
            s.erase(0,1);
            
        }else{
            s.erase(2,1);
            s.erase(0,1);
        }
        
        length = count1;
        //splitPair(s,length);

    }

    return pair_ptr;
}

void printPair(Pair* pair) {
    // TODO finish this function, do not modify the parameters
    cout << pair->char1 << " " << pair->char2 << endl;
}


