#include <stdio.h>

int main()
{
    float a,b,c,d,e,total,per;

    printf("enter the marks of five subject ");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);

    total=(a+b+c+d+e);
    per=(total/500)*100;

    if(per<100 && per>=80)
    {
        printf("precentage = %.2f",per);
        printf("\ngrade is A");
    }
    else if(per<80 && per>=60)
    {
        printf("precentage = %.2f",per);
        printf("\ngrade is B");
    }
    else if(per<60 && per>=50)
    {
        printf("precentage = %.2f",per);
        printf("\ngrade is C");
    }
    else if(per<50 && per>=40)
    {
        printf("precentage = %.2f",per);
        printf("\ngrade is D");
    }
    else if(per<40 && per>=0)
    {
        printf("precentage = %.2f",per);
        printf("\ngrade is F");
    }
    else
    {
        printf("invalid marks");
    }
    return 0;
}