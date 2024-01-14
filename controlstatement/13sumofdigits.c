#include <stdio.h>
int main()
{
    int n,sum=0,rem;
    printf("enter any number: ");
    scanf("%d",&n);

    int c=n;
    while(c!=0)
    {
        rem=c%10;
        sum=sum+rem;
        c=c/10;
    }
    printf("the sum %d is %d",n,sum);
    return 0;
}