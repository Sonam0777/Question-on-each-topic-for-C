#include <stdio.h>
int main()
{
    int x =10;
    int *p;
    int **q;
    p = &x;
    printf("value of x =%d",x);
    printf("\naddress of x = %u",p);
    printf("\naddress of x = %d",&x);
    printf("\nthe value of x = %d",*p);
    printf("\naddress of p = %x",&p);
    q = &p;
    printf("\nvalue of x = %d",**q);
    printf("\naddress of x=%u",*q);
    printf("\nthe address of p = %x",q);
    return 0;
}