#include <stdio.h>
int main()
{
    int n,i,x;
    printf("enter nth element ");
    scanf("%d",&n);
    
    printf("enter the value of x ");
    scanf("%d",&x);
    int p = 1+x*x;
    for(i=3;i<=n;i++)
    {
        p=p+i*x*x;
    }

    printf("the sum of series = %d",p);
    return 0;
}