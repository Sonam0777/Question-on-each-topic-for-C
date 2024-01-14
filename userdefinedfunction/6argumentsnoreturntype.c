#include <stdio.h>
void sum(int,int);
int main()
{
    int a,b;
    printf("enter two numbers ");
    scanf("%d %d",&a,&b);
    sum(a,b);
    /* printf("sum=%d",sum(a,b)); */
    return 0;
}

void sum(int a, int b)
{
    int s = a+b;
    printf("sum = %d",s);
}

