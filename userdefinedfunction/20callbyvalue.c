#include <stdio.h>

void swap(int,int);
int main()
{
    int a = 10, b=20;
    printf("before swapping the position\n a=%d\tb=%d",a,b);
    swap(a,b);
    return 0;
}

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\nafter swapping the position\n a=%d\tb=%d",a,b);
}