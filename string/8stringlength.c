#include <stdio.h>
#include <string.h>
int main()
{
    int len;
    char n[20];
    printf("enter any string ");
    scanf("%s", n);
    len = strlen(n);
    printf("the length of string provided is %d",len);
    return 0;
}