#include <stdio.h>
int main()
{
    int x = 10, *p = &x;
    printf("\nthe address of x is %u",&x);//%p,%x can be also be used to print address
    printf("\nthe address of x is %u",p);
    printf("\nthe value of x is %d",x);
    printf("\nthe value of x is %d",*p);
    printf("\nthe address of p is %u",&p);
    return 0;
}