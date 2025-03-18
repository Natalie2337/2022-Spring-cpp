#include <iostream>
#include <new>
using namespace std;

struct CandyBar 
{
    string name;
    //采用string
    double weight;
    int calories;
};

int main()
{
    CandyBar *dynArray;
    dynArray = new (nothrow) CandyBar[3];

    cout << "Please input three CandyBar's information:" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the brand name of the candy bar: ";
        //其他的办法，比如用cin.get()都会出现错误，不能读取第二家公司的信息。只有这个办法能让它正常读取后面的。
        cin.get();
        getline(cin,dynArray[i].name,'\n') ;
        cout << "Enter the weight: ";
        cin >> dynArray[i].weight;
        cout << "Enter the calories: ";
        cin >> dynArray[i].calories;    
    }


    cout << "Displaying the CandyBar array contents: " << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "Brand name: " << dynArray[i].name<< endl;
        cout << "Weight: " << dynArray[i].weight << endl;
        cout << "Calories: " << dynArray[i].calories << endl;
    }


    delete dynArray;
    return 0;
}