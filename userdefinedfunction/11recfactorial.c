#include <stdio.h>
int fact(int);
int main()
{
    int n;
    printf("enter any number ");
    scanf("%d",&n);
    int factorial = fact(n);
    printf("the factorial of %d is %d",n,factorial);
    return 0;
}

int fact(int n)
{
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}