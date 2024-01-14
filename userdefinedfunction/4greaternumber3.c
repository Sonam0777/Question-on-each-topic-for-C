#include <stdio.h>
int greater(int a,int b,int c);
int main()
{
    int a,b,c;
    printf("enter any three number ");
    scanf("%d %d %d",&a,&b,&c);
    printf("greater number is %d",greater(a,b,c));
    return 0;
}
int greater(int a, int b, int c)
{
    if(a>b && a>c)
    return a;
    else if(b>a && b>c)
    return b;
    else
    return c;
}