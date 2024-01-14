#include <stdio.h>
#include <conio.h>
int main()
{
    int x = 10;
    int *p;
    int **q;
    int ***r;
    p=&x;
    q = &p;
    r = &q;
    printf("the value of x = %d",x);
    printf("\nthe value of x = %d",*p);
    printf("\nthe value of x = %d",**q);
    printf("\nthe value of x = %d",***r);
    return 0;
}