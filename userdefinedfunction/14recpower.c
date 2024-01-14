#include <stdio.h>

int po(int,int);
int main()
{
    int b,n;
    printf("enter base ");
    scanf("%d",&b);
    printf("enter power ");
    scanf("%d",&n);
    printf("result = %d",po(b,n));
    return 0;
}

int po(int b,int n)
{
    if(n==0)
    return 1;
    else
    return b * po(b,n-1);
}