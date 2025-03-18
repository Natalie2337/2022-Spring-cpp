#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[100];
    char *description;

    strcpy(name,"Anne");

    description = (char*) malloc(30*sizeof(char));
    if(description == NULL)
        fprintf(stderr, "unable to allocate required memory\n");
    else
        strcpy(description,"she is a A+ student");

    description = (char*)realloc(description,200*sizeof(char));
    if(description == NULL)
        fprintf(stderr,"unable to allocate required memory\n");
    else
        strcat(description,", and she is in class 23");
    
    printf("name= %s\n",name);
    printf("description= %s\n",description);

    free(description);
    return 0;
}