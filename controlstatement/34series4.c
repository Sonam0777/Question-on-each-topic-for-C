#include <stdio.h>
#include <math.h>

int main()
{
    int sum=0;
    int i,n,x;
    printf("enter nth term ");
    scanf("%d",&n);

    printf("enter the value of x ");
    scanf("%d",&x);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum=sum-pow(x,i);
        }
        else
        {
            sum=sum+pow(x,i);
        }
    }
    printf("sum = %d",sum);
    return 0;
}