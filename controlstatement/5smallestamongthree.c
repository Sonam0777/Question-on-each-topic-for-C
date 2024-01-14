#include <stdio.h>
int main()
{
    int a,b,c;

    printf("enter the value of a,b,c ");
    scanf("%d %d %d",&a,&b,&c);

    /* if(a<b && a<c)
    {
        printf("%d is smallest number(i.e a)",a);
    }
    else if(b<a&&b<c)
    {
        printf("%d is smallest number(i.e b)",b);
    }
    else
    {
        printf("%d is smallest number(i.e c)",c);
    } */

    if(a<b)
    {
        if(a<c)
        {
            printf("%d is smalest",a);
        }
        else
        {
            printf("%d is smallest",c);
        }
    }
    else
    {
        if(b<c)
        {
            printf("%d is smallest",b);
        }
        else{
            printf("%d is smallest",c);
        }
    }
    
    return 0;
}