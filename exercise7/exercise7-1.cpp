#include <iostream>
#include <cstring>
using namespace std;

struct stringy{
    char * str;
    int ct;
};


void show (stringy sty, int n = 0);
//用default argument 的时候，要写出来缺省值是多少
void show (char charr[], int n = 0);
void set (stringy & sty,char charr[]);

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany,testing);
    
    show(beany);
    //用default function的时候

    show(beany,2);

    testing[0] = 'D';
    testing[1] = 'U';
    show(testing);
    //用defzult function的时候

    show(testing,3);
    show("Done!");

    return 0;
}


void show(stringy sty, int n)
{
    if(n==0){
        cout << sty.str << endl;
        //可以用字符数组名输出字符串
    }else{
        for (int i = 0; i < n; i++){
            cout << sty.str << endl;
        }    
    }
}


void show(char charr[], int n)
{
    int len = sizeof(charr)/sizeof(char);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < len-1; j++)
        {
            cout << charr[j];
        }    
    }    
}



void set(stringy & sty, char charr[])
{
    char * hold = new char[sty.ct+1];
    for (size_t i = 0; i < sty.ct; i++)
    {
       *(hold+i)=charr[i];
    }

    sty.str = hold;
   
}

