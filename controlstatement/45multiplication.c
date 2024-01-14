#include <stdio.h>
int main()
{
    int i,n;
    printf("enter any number less than 20: ");
    scanf("%d",&n);

    if(n<20)
    {
        for(i=1;i<=10;i++)
        {
            int mul = n*i;
            printf("%d * %d = %d",n,i,mul);
            printf("\n");
        }
    }
    else
    {
        printf("invalid.....");
    }
    return 0;
}