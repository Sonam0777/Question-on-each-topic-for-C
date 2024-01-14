#include <stdio.h>
int main()
{
    int num;
    printf("enter any number  ");
    scanf("%d",&num);

    if(num<0)
    {
        printf("%d is negative",num);
    }
    else
    {
        printf("%d is not negative",num);
    }
    return 0;
}