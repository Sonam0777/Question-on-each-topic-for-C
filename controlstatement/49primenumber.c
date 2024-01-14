#include <stdio.h>
int main()
{
    int n,i,j,prime;
    printf("enter any number ");
    scanf("%d",&n);

/*     for(i=2;i<n;i++)
    {
        prime = 1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                prime = 0;
                break;
            }
        }
    if(prime==1)
    {
    printf("%d\t",i);
    }
    } */

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("%d is not prime.",n);
            break;
        }
    }
    if(i==n)
    {
        printf("%d is prime",n);
    }
    return 0;
}