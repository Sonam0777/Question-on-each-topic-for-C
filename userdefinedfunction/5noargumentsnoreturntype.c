#include <stdio.h>
void sum();
void main()
{
    sum();
    printf("\nit is a function with no arguments and no return value:");
    return 0;
}

void sum()
{
    int a,b,s;
    printf("enter two numbers ");
    scanf("%d %d",&a,&b);
    s=a+b;
    printf("sum = %d",s);
}