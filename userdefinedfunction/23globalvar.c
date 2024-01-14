#include <stdio.h>
int x = 4, y=5;

void sum(int,int);
void pro(int,int);
int main()
{
    sum(x,y);
    pro(x,y);
    return 0;
}

void sum(int x,int y)
{
    int add = x+y;
    printf("sum=%d",add);
}

void pro(int x,int y)
{
    int mul = x*y;
    printf("\nproduct = %d",mul);
}