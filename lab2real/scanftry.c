# include <stdio.h>

int main()
{
    printf("please input an integer, a character and a float: \n");

    int a;
    scanf("%d", &a);

    getchar(); // very important, if not, the program will make mistake in reading in the character!
    char b;
    scanf("%c",&b);

    float c;
    scanf("%f", &c);

    printf("the integer you input is %d \n",a);
    printf("the character you input is %c \n",b);
    printf("the float you input is %f \n",c);

    return 0;
}