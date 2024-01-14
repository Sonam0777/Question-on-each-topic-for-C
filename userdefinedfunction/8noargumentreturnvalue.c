#include <stdio.h>
int sum( );
int main()
{
    int r = sum( );
    printf("sum = %d",r);
    return 0;
}

int sum( )
{
    int a,b,s;
    printf("enter two numbers ");
    scanf("%d %d",&a,&b);
    s = a+b;
    return s;
} 