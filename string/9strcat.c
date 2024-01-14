#include <stdio.h>
#include <string.h>
int main()
{
    char a[]={"Happy "};
    char b[]={"New Year!!"};
    char c[15];

    printf("%s",strcat(a,b));
    return 0;
}