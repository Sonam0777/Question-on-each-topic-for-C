#include <stdio.h>
int main()
{
    int stock[5];
    float price[5];

    int i;
    float total=0;

    for(i=0;i<5;i++)
    {
    printf("enter the stock value ");
    scanf("%d",&stock);

    printf("enter the price ");
    scanf("%f",&price);

    total = total+stock[i]*price[i];
    }

    printf("total value  =  %.2f",total);
    return 0;
}