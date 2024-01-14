#include <stdio.h>

int fibo(int);
int main()
{
    int n;
    printf("enter nth term ");
    scanf("%d",&n);
    printf("the fibonacci series upto %d term is ",n);
    for(int i=1;i<=n;i++)
    {
        printf("%d\t",fibo(i));
    }
    return 0;
}

int fibo(int n)
{
    if(n==1 || n==2)
    return 1;
    else
    return fibo(n-1)+ fibo(n-2);
}