#include <stdio.h>
int main()
{
    int n,sum=0,rem;
    printf("enter any number: ");
    scanf("%d",&n);
    int temp=n;
    while(n!=0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("%d is palindrome",temp);
    }
    else
    {
        printf("%d is not palindrome",temp);
    }
    return 0;
}