#include <iostream>
#include <stdlib.h>
using namespace std;


int fill_array(double arr[],int size);
void show_array(double *arr, int size);
void reverse_array(double *arr, int size);

int n=1;

int main()
{
    cout << "Enter the size of an array: ";
    cin >> n;
    double *array = new double[n];
    fill_array(array, n);
    show_array(array, n);
    
    reverse_array(array,n);

}

int fill_array(double arr[], int size)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter value #" << (i+1) << " ";
        cin >> arr[i];
        count++;
    }
    

    return count;
}

void show_array(double *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(arr+i) << " ";
    }
    cout << endl;   
}

void reverse_array(double *arr, int size)
{
    //recursive??
    
    double temp;
    if(size%2==1){
        for (int i = 0; i < (size-1)/2; i++)
        {
            temp = *(arr+i);
            *(arr+i) = *(arr+size-i-1);
            *(arr+size-i-1) = temp;
        }
        
    }else{
        for (int i = 0; i < size/2; i++)
        {
            temp = *(arr+i);
            *(arr+i) = *(arr+size-i-1);
            *(arr+size-i-1) = temp;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << *(arr+i) << " ";
    }   
    

    cout << endl;
    
}