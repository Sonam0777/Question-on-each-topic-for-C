#include <stdio.h>
#include <string.h>

int main()
{
    char a[20];
    char b[20];
    /* char temp[20]; */

    printf("enter your string ");
    gets(a);

    int len = strlen(a);
    int i,j=0;

    for(i=len-1;i>=0;i--)
    {
        b[j++]=a[i];
    }
    b[j]='\0';
    printf("reversed string %s",b);
    return 0;
}