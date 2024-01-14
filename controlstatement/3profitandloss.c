#include <stdio.h>
int main()
{
    float sp;
    float cp;

    printf("enter cost price ");
    scanf("%f",&cp);
    printf("eneter selling price ");
    scanf("%f",&sp);


    float c=cp-sp;

    if(c>0)
    {
        printf("the is loss");
    }
    else
    {
        printf("there is profit");
    }
    return 0;
}