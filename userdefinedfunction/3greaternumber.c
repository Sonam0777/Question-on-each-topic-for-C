#include <stdio.h>
int greater(int a, int b);
int main()
{
    int a,b;
    printf("enter any two numbers: ");
    scanf("%d %d",&a,&b);
    printf("%d is greater",greater(a,b));
    return 0;
}

int greater(int a, int b)
{
    if(a>b)
    return a;
    else
    return b;
}