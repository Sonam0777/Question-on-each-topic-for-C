#include <stdio.h>
int main()
{
    int n;
    printf("enter any number ");
    scanf("%d",&n);
    
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact = i*fact;
    }
    printf("the factorial of %d is %d",n,fact);
    return 0;
}