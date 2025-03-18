#include <stdio.h>

int main()
{
    char str[20];
    printf("enter a string:\n");
    fgets(str,20,stdin);
    printf("you enter ");
    puts(str);

    return 0;
}