#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("enter any number ");
    {
        scanf("%d",&n);
    }
    if(n>=1000 && n<=9999)
    {
        while(n!=0)
        {
            int rem = n%10;
            sum=10*sum+rem;
            n=n/10;
        }
        printf("the reverse = %d",sum);
    }
    else
    {
        printf("you number does not meet criteria....");
    }
    return 0;
}