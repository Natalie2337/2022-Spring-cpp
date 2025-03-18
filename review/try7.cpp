#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "how many classes did you take in this semester? ";
    cin >> n;

    float *pScore = new float[n];
    float *pt = pScore;

    cout << "the scores are:\n";
    pt = pt-n;
    for ( ; pt < pScore + n; pt++){
        cout << *pt << "\t";
    }

    delete []pScore;    
}