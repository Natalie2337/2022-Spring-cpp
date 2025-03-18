#include <stdio.h>

int main()
{
    printf("Enter the number of seconds:");
    long a;
    scanf("%li",&a);
    
    int dayremainder = a % 86400;
    int days= (a-dayremainder)/86400;
    int hourremainder = dayremainder % 3600;
    int hours=(dayremainder-hourremainder)/3600;
    int minuteremainder = hourremainder % 60;
    int minutes=(hourremainder-minuteremainder)/60;
    int seconds= minuteremainder;

    printf("\n %li seconds = %d days, %d hours, %d minutes, %d seconds \n", a,days,hours,minutes,seconds);

    return 0;
}