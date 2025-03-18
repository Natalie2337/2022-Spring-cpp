#include <iostream>
#include "my_stack.h"

using namespace std;

const int MAX = 5;
int main()
{
    //由于这里较简单的constructor只需要输入一个参数 n = MAX
    Stack st(MAX);

    cout << "enter some unsigned numbers no more than MAX";
    for (int i = 0; i < MAX; i++)
    {
        Item item;
        cin >> item;
        st.push(item);
        cout << "push" << endl;
    }

    Stack st2 = st;
    Stack st3(st);


    //由于这里 pitems 对应的数组是private的，所以不能通过st.pitems访问
    
    //for (int i = 0; i < MAX; i++)
    //{
        //Item item = *(st2.pitems+i);
        //st2.pop(item);
    //}
    
}