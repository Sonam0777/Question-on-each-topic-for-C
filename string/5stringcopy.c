#include <stdio.h>
#include <string.h>
int main()
{
    char x[] = {"Happy New Year!!"};
    char y[50];
    printf("\noriginal strind %s ",x);
    strcpy(y,x);
    printf("\ncopied string %s",y);
    return 0;
}