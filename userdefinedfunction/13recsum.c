#include <stdio.h>

int sum(int);
int main()
{
    int n;
    printf("enter nth term ");
    scanf("%d",&n);
    int add = sum(n);
    printf("the fibonacci series upto %d term is %d ",n,add);
    return 0;
}

int sum(int n)
{
    if(n==1)
    return 1;
    else
    return n+sum(n-1);
}