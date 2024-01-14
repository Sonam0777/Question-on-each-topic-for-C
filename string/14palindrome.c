#include <stdio.h>
#include <string.h>

int main()
{
    char a[20],b[20];
    printf("enter the string ");
    gets(a);
    strcpy(b,a);
    strrev(b);
    if(strcmp(a,b)==0)
    {
        printf("palindrome string");
    }
    else
    {
        printf("not a palindrome string!!");
    }
    return 0;
}