#include <stdio.h>

int add(int a, int b);

int main()
{
    int a,b;
    printf("enter first number: ");
    scanf("%d",&a); 
    printf("enter second number ");
    scanf("%d",&b);

    printf("the sum is %d ",add(a,b));
    return 0;
}

int add(int a, int b)
{
    int sum = a+b;
    return sum;
}