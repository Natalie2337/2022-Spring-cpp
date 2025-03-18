#include <stdio.h>

int main()
{
    int var1 = 3;
    float var2 = 24.8f;
    double var3 = 23.42;

    printf("Address of var1 is %p, its value is %d\n", &var1, var1);
    printf("Address of var2 is %p, its value is %f\n", &var2, var2);
    printf("Address of var3 is %p, its value is %lf\n", &var3, var3);

    return 0;


}