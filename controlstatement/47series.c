#include <stdio.h>
int main()
{
    int i,n,sum=1;
    printf("enter nth term ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("%d\t",sum);
        sum=sum+4;
    }
    return 0;
}