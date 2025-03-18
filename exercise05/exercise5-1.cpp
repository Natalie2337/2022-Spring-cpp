#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    int sum = 0;
    do{
        cout << "Enter an integer number:" ;
        cin >> num;
        sum = sum + num;
        cout << "The cumulative sum of the entries to data is :" << sum << endl;
    }while(num!=0);

    return 0;  
    
}