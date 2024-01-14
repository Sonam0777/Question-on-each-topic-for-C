#include <stdio.h>
int main()
{
    int i,n;
    printf("enter how many even number sum you want to print ");
    scanf("%d",&n);
    int sum = 0;
    for(i=0;i<=n;i=i+2)
    {
        sum=sum+i;
    }
    printf("sum = %d",sum);
    return 0;
}