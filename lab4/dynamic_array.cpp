#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "how many languages can you speak?";
    cin >> n;
    
    float *pScore = new float[n];
    //动态数组，n由输入确定
    float *pt = pScore;

    cout << "input" << n << "scores" ;
    for (; pt < pScore + n; pt++)
        cin >> *pt;

    cout << "the scores are \n";
    pt = pt-n;
    for(;pt < pScore+n ; pt++)
        cout << *pt << "\t";
    cout << "\n";

    delete []pScore;

    return 0;
    
}