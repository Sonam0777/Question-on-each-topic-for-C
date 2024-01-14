#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter nth element ");
    scanf("%d",&n);

    for(i=5;i<=n;i=i+5)
    {
        sum = sum + i;
    }
    printf("sum of numbers divisible by 5 upto %d is %d",n,sum);
    return 0;
}