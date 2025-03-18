#include <iostream>
#include <new>
using namespace std;

struct CandyBar {
    string name;
    //这里选择用string 而不用char的数组！
    double weight;
    int calories;
    double calperweight;
};

int main()
{ 
    CandyBar struArr[3];
    cout << "Please input three CandyBar's information: "  << endl;
    
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the brand name of the candy bar: " ;
        cin.get();
        getline(cin,struArr[i].name,'\n');
        cout << "Enter the weight: ";
        cin >> (struArr[i].weight);
        cout << "Enter the calories: ";
        cin >> (struArr[i].calories);
    }
    
    cout << "Displaying the candybar array content: " << endl;
    for (int i = 0; i < 3; i++){
        cout << "Brand name: " << (struArr[i].name) << endl;
        cout << "Weight: " << (struArr[i].weight) << endl;
        cout << "Calories: " << (struArr[i].calories) << endl;
    }


{
    for (int i = 0; i < 3; i++)
    {
        struArr[i].calperweight = (double) (struArr[i].calories / struArr[i].weight);
    }
    
    double max;
    int maxbrand;

    if(struArr[0].calperweight>=struArr[1].calperweight){
        if(struArr[0].calperweight>=struArr[2].calperweight){
            max =struArr[0].calperweight;
            maxbrand=0;
        }else{
            max =struArr[2].calperweight;
            maxbrand=2;
        }
    }else if(struArr[1].calperweight>=struArr[2].calperweight){
        max =struArr[1].calperweight;
        maxbrand=1;
    }else{
        max =struArr[2].calperweight;
        maxbrand=2;
    }
    
    cout << "The greatest calories per weight is: " << endl;
    cout << "Brand name: " << struArr[maxbrand].name << endl;
    cout << "Calories per weight: " << max << endl;

}
    return 0;

    

 
}