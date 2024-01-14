#include <stdio.h>
int main()
{
    float a[5];
    int i;

    for(i=0;i<5;i++)
    {
        printf("enter marks of %d subject ",i+1);
        scanf("%f",&a[i]);
        printf("\n");
    }

    float sum=0.0;
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }

    printf("the sum of five subject = %.2f",sum);

    float avg = sum/5;
    
    printf("\nthe average of five subject = %.2f",avg);
    return 0;
}