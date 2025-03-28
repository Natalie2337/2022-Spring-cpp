#include <iostream>
using namespace std;

void Displaymenu();
int Add(int, int);
int Subtract(int, int);
int Multiply(int, int);
int Divide(int, int);
int Modulus(int a, int b);

int main()
{
    Displaymenu();
    int YourChoice;
    int a, b;
    char confirm;
    do
    {
        cout << "Enter your choice(1~5): ";
        cin >> YourChoice;
        cout << "Enter your integer numbers: ";
        cin >> a >> b;
        cout << "\n";
        switch(YourChoice)
        {
            case 1: Add(a,b); break;
            case 2: Subtract(a,b); break;
            case 3: Multiply(a,b); break;
            case 4: Divide(a,b); break;
            case 5: Modulus(a,b); break;

        }
        cout << "Press y or Y to continue: ";
        cin >> confirm;
    } while (confirm == 'y'|| confirm == 'Y');

    return 0;    
}

void Displaymenu()
{
    cout << "------------------------------------------------" << endl;
    cout << "\t\t Menu" << endl;
    cout << "------------------------------------------------" << endl;

    cout << "1.Add" <<  endl;
    cout << "2.Subtract" <<  endl;
    cout << "3.Multiply" <<  endl;
    cout << "4.Divide" <<  endl;
    cout << "5.Modulus" <<  endl;
}

int Add(int a, int b)
{
    int res = a+b;
    cout << "Result: " << res << endl;
    return 0;
}

int Subtract(int a, int b)
{
    int res = a-b;
    cout << "Result: " << res << endl;
    return 0;
}

int Multiply(int a, int b)
{
    int res = a*b;
    cout << "Result: " << res << endl;
    return 0;
}

int Divide(int a, int b)
{
    double res = (double) a/b;
    cout << "Result: " << res << endl;
    return 0;
}

int Modulus(int a, int b)
{
    int res =  a % b;
    cout << "Result: " << res << endl;
    return 0;
}





