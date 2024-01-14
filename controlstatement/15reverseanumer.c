#include <stdio.h>
int main()
{
    int n,sum=0,rem;
    printf("eneter any number ");
    scanf("%d",&n);
    int temp=n;
    while(n!=0)
    {
        rem=n%10;
        sum=10*sum+rem;
        n=n/10;
    }
    printf("the reverse of %d is %d",temp,sum);
    return 0;
}