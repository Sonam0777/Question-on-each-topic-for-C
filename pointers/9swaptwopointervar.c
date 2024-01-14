#include <stdio.h>
int main()
{
    int a = 20, b = 30;
    int *p,*q;
    p = &a;
    q = &b;
    int *temp;
    printf("before swapping\n a=%d\tb=%d",a,b);
    *temp = *p;
    *p = *q;
    *q = *temp;
    printf("\nafter swapping\n a=%d\tb=%d",*p,*q);
    return 0;
}