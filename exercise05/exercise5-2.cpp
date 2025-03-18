#include <iostream>

using namespace std;

int main()
{
    cout << " Enter words(to stop, type the word done):" << endl;
    int count=0;
    while(true){
        //有关输入的判断条件有待改进
        string str;
        cin >> str;
        if(str=="done"){
            break;
        }
        count = count +1;
        cin.get();
    }

    cout << "You entered a total of " << count << " words." << endl;

    return 0;
    
}