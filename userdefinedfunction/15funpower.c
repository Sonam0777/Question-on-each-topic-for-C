#include <stdio.h>

void po(int,int);
int main()
{
    int x,n;
    printf("enter the base and power ");
    scanf("%d %d",&x,&n);
    po(x,n);
    return 0;
}

void po(int x,int n)
{
    int i,power=1;
    for(i=1;i<=n;i++)
    {
        power = power * x;
    }
    printf("result = %d",power);
}