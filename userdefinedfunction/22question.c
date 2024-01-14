#include <stdio.h>

void circulate(int*,int*,int*);
int main()
{
    int x,y,z;
    printf("enter the value of x,y,z ");
    scanf("%d %d %d",&x,&y,&z);
    printf("before circulating the value\nx=%d\ty=%d\tz=%d",x,y,z);
    circulate(&x,&y,&z);
    printf("\nafter swapping the value\nx=%d\ty=%d\tz=%d",x,y,z);
    return 0;
}

void circulate(int*x,int*y,int*z)
{
    int temp1 = *x;
    int temp2 = *y;
    *y = *z;
    *z = temp1;
    *x = temp2;
}