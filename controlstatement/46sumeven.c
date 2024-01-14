#include <stdio.h>
int main()
{
    int i,n,sum=0,j=2;
    printf("enter nth term ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        sum=sum+j;
        j=j+2;
    }
    printf("sum = %d",sum);
    return 0;
}