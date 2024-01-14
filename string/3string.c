#include <stdio.h>
int main()
{
    char name[20];
    printf("enter string ");
    scanf("%[A-Z]", name);
    printf("your name is %s", name);
    return 0;
}