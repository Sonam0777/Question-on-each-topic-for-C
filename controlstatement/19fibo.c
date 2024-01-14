#include <stdio.h>
int main()
{
    int n,a=0,b=1,sum;
    printf("enter nth element ");
    scanf("%d",&n);
    int i=1;
    do
    {
        printf("%d\t",b);
        sum=a+b;
        a=b;
        b=sum;
        i++;
    } while (i<=n);
    return 0;
}