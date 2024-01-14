#include <stdio.h>
#include <string.h>
int main()
{
    char a[20];
    printf("enter string ");
    gets(a);
    printf("before lower case ");
    puts(a);
    strlwr(a);
    printf("after lowecase ");
    puts(a);
    return 0;
}