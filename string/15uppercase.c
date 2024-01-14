#include <stdio.h>
#include <string.h>
int main()
{
    char a[20];
    printf("enter string ");
    gets(a);
    printf("before upper case ");
    puts(a);
    strupr(a);
    printf("after upper case ");
    puts(a);
    return 0;
}