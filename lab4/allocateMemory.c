#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[100];
    char *description;

    strcpy(name,"Natalie Normanova");
    //注意不可以name="Natalie Normanova"

    description = (char*)malloc(200*sizeof(char));
    //或者写 (char*)calloc(200,sizeof(char))
    if(description == NULL)
    {
        fprintf(stderr, "unable to allocate required memort.\n");
    }
    else
    {
        strcpy(description,"she is a student in sustech");
    }
    printf("Name = %s\n",name);
    printf("Description = %s\n", description);

    free(description);

    return 0;
}