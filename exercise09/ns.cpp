#include <iostream>
#include "ns.h"

namespace SALES
{
    using std::cout;
    using std::cin;
    using std::endl;
    


    void setSales(Sales& s,const double ar[],int n)
    {//这是interact型的
        
        for (int i = 0; i < QUARTERS; i++)
        {
            s.sales[i] = ar[i];
        }
           
        s.average = (s.sales[0]+s.sales[1]+s.sales[2]+s.sales[3])/4;
        
        double min = ar[0];
        double max = ar[0];
        for (int i = 1; i < QUARTERS; i++){
            if(ar[i]<min) min = ar[i];
        }

        for (int i = 1; i < QUARTERS; i++){
            if(ar[i]>max) max = ar[i];
        }

        s.min = min;
        s.max = max;
    
    }

    void setSales(Sales & s)
    {
        
        int len = sizeof(s.sales)/sizeof(double);
        //这样写会把=0的元素也算进去


        double sum = 0;
        for (int i = 0; i < len; i++)
        {
            sum+=s.sales[i];
        }

        s.average = sum/len;
        
        double min = s.sales[0];
        double max = s.sales[0];
        for (int i = 1; i < len; i++){
            if(s.sales[i]<min && (s.sales[i]!=0)) min = s.sales[i];
        }

        for (int i = 1; i < len; i++){
            if(s.sales[i]>max) max = s.sales[i];
        }

        s.min = min;
        s.max = max;
        
    }

    void showSales(const Sales & s)
    {
        int len = sizeof(s.sales)/sizeof(double);
        std::cout<< "Sales: " ;
        for (int i = 0; i < len; i++)
        {
            std::cout << s.sales[i] <<" ";
        }
        std::cout << "\n";
        
        std::cout << "Average: " << s.average << std::endl;
        std::cout << "Max: " << s.max << std::endl;
        std::cout << "Min: " << s.min << std::endl;
    }
}