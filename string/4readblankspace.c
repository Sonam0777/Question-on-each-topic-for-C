#include <stdio.h>
int main()
{
    char name[50];
    printf("enter your name ");
    scanf("%[^\n]", name);
    printf("your name is %s ",name);
    return 0;
}