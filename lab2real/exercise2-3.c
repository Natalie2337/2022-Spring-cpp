#include <stdio.h>

int main()
{
    printf("\n Please Enter a character:\t");
    char a;
    scanf("%c",&a);

    printf("\n Please Enter an Integer Value:\t");
    int b;
    scanf("%d",&b);

    printf("\n Please Enter a Float Value:\t");
    float c;
    scanf("%f",&c);

    printf("\n The variables you enter were:");
    printf("\n");
    printf("\n The character value that you entered is: %c ", a);
    printf("\n");
    printf("\n The integer value that you enter is: %d",b);
    printf("\n");
    printf("\n The float value that you enter is: %f",c);
    printf("\n");

    return 0;

}