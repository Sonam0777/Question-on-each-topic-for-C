#include <stdio.h>
#include <string.h>
int main()
{
    char string[10];
    printf("enter any string ");
    gets(string);
    strrev(string);
    printf("reverse string %s",string);
    return 0;
}