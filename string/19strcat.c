#include <stdio.h>
#include <string.h>
int main()
{
    char firstname[10] = {"Sonam"};
    char secondname[10]={"Sherpa"};
    char name[20];
    int i,j;

    for(i=0;firstname[i]!='\0';i++)
    {
        name[i]=firstname[i];
    }
    name[i]=' ';

    for(j=0;secondname[j]!='\0';j++)
    {
        name[i+j+1]=secondname[j];
    }
    name[i+j+1]='\0';
    printf("name = %s",name);
    return 0;
}