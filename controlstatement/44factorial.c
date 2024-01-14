#include <stdio.h>
int main()
{
    int i,n,fact;
    for(i=0;i<5;i++)
    {
        printf("enter the positive number ");
        scanf("%d",&n);
        if(n>0)
        {
            int fact=1;
            for(int j = 1;j<=n;j++)
            {
                fact=fact*j;
            }
            printf("the factorial of %d is %d\n",n,fact);
        }
    }
    return 0;
}