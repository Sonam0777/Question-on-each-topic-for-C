#include <stdio.h>

void swap(int*, int*);
int main()
{
    int x,y;
    printf("enter the value of x and y ");
    scanf("%d %d",&x,&y);
    printf("before swapping\n x=%d\ty=%d",x,y);
    swap(&x,&y); 
    printf("\nafter swapping\n x=%d\ty=%d",x,y);
    return 0;
}

void swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}