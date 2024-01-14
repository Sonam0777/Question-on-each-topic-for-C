#include <stdio.h>
int main()
{
    int a = 10;
    int *p1;
    p1 = &a;
    /*not possible
    printf("%u",p1*2);*/
    return 0;
}