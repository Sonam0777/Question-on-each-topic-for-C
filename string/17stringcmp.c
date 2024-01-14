#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20];
    char str2[20];
    printf("enter first string ");
    gets(str1);
    printf("enter second string ");
    gets(str2);

    if(strcmp(str1,str2)==0)
    {
        printf("both string identical");
    }
    else if(strcmp(str1,str2)<0)
    {
        printf("str1 is less than str2");
    }
    else if(strcmp(str1,str2)>0)
    {
        printf("str1 is more than str2");
    }
    return 0;
}