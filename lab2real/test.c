#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("\n the sizeof(char) is %ld bytes\n", sizeof(char));
    printf("the sizeof(short) is %ld bytes \n", sizeof(short));
    printf("the sizeof(int) is %ld bytes\n", sizeof(int));
    printf("the sizeof(long) is %ld bytes\n", sizeof(long));
    printf("the sizeof(long long) is %ld bytes\n", sizeof(long long));
    printf("the sizeof(float) is %ld bytes\n", sizeof(float));
    printf("the sizeof(double) is %ld bytes\n", sizeof(double));
    printf("the sizeof(long double) is %ld bytes\n", sizeof(long double));
    printf("the sizeof(bool) is %ld bytes\n", sizeof(bool));

    return 0;
}