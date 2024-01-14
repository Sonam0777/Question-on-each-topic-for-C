#include <stdio.h>

int main()
{
    int marks,i=1,sum=0;
    float avg;

    while(i<=5)
    {
        printf("enter the marks of %d subject ",i);
        scanf("%d",&marks);
        sum=sum+marks;        
        i++;
    }

    avg=sum/5;

    printf("sum of five subjects is %d",sum);
    printf("\navgrage of five subjects is %.2f",avg);

    return 0;
}