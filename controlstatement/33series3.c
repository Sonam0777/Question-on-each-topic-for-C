#include <stdio.h>
int main()
{
    int n,i;
    float p=1,sum=0;
    printf("enter nth term ");
    scanf("%d",&n);


    for(i=1;i<=n;i++)
    {
      p=p*i;  
      sum=sum+(float)i/p;
    }
    printf("sum of serie is %.2f",sum);
    return 0;
}