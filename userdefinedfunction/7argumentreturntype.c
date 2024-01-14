#include <stdio.h>
int sum(int,int);
int main()
{
    int a,b;
    printf("enter two numbers ");
    scanf("%d %d",&a,&b);
    printf("sum = %d",sum(a,b));
    return 0;
}

int sum(int a, int b)
{
    int s = a+b;
    return s;
}