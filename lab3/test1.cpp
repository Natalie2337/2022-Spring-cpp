#include <iostream>

using namespace std;

int main()
{
    int foo[]={16,2,77,40,12017};
    
    cout<<"foo[0]="<<foo[0]<<endl;
    cout<<"foo[1]="<<foo[1]<<endl;
    cout<<"foo[2]="<<foo[2]<<endl;

    cout<<"the sizeof foo is "<<sizeof(foo)<<" bytes"<<endl;
    cout<<"the sizeof an element in foo is "<<sizeof(foo[0])<<" bytes"<<endl;
    cout<<"there are "<<sizeof(foo)/sizeof(foo[0])<<" elements in the array foo"<<endl;

    return 0;

}