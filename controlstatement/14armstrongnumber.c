#include <stdio.h>
#include <math.h>
int main()
{   
    int n,rem,sum=0;
    printf("enter any number ");
    scanf("%d",&n);

    int c=n;
    while(n!=0)
    {
        rem=n%10;
        sum+=rem*rem*rem;
        n=n/10;
    }
    if(sum==c)
    {
        printf("%d is armstrong number",c);
    }
    else{
        printf("%d isnot armstrong number",c);
    }
    return 0;
}