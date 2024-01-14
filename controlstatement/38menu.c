#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415
int main()
{
    int choice,i,n,N;
    float r,a,num,sum;
    printf("Choose any of this choice \n");
    printf("1. Area of Circle\n");
    printf("2. Check the given number is odd or even.\n");
    printf("3. To find the sum of N numbers.\n");
    printf("4. Exit\n");

        printf("enter the choice ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                    printf("enter radius \n");
                    scanf("%f",&r);
                    a=PI*r*r;
                    printf("area of triangle: %.2f",a);
                    break;

            case 2:
                    printf("emter any number ");
                    scanf("%d",&n);
                    if(n%2==0)
                    {
                        printf("You are Even");
                    }
                    else
                    {
                        printf("You are Odd");
                    }
                    break;
            case 3:
                    sum = 0.0;
                    printf("enter nth term ");
                    scanf("%d",&N);
                    for(i=1;i<=N;i++)
                    {
                        sum=sum+i;
                    }
                    printf("sum to %d term is %.2f",N,sum);
                    break;
            case 4:
                    exit(0);
            default:
                    printf("invalid choice...");
        }
    return 0;
}