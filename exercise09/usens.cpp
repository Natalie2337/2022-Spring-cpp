#include <iostream>
#include "ns.h"

int main(void)
{
    using SALES::QUARTERS;
    using SALES::setSales;
    using SALES::showSales;
    using SALES::Sales;

    Sales non_inter={{34.5,36.7,88.9,23.5},0,0,0};
    Sales inter;

    


    std::cout<<"Non-interactive version of setSales() to provide values: " << std::endl;
    setSales(non_inter);
    showSales(non_inter);

    
    std::cout<<"\n" ;

    std::cout<<"Interactive version of setSales() to provide values: " << std::endl;
    std::cout<<"Enter sales for 4 quarters: " << std::endl;
    double arr[QUARTERS];
    for (int i = 0; i < QUARTERS; i++)
    {
        std::cin >> arr[i];
        std::cin.get();
    }
    
    setSales(inter,arr,QUARTERS);
    showSales(inter);
}