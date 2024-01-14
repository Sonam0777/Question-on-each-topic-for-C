#include <stdio.h>
int main()
{
    int n;
    int a,b;
    printf("enter a and b ");
    scanf("%d %d",&a,&b);
    printf("which arithmetic operation you want to perform: ");
    printf("\nselect 1 for addition, 2 for subtraction, 3 for multiplication and 4 for division");
    printf("\n1=>addition\n2=>subtraction\n3=>multiplication\n4=>division\n");

    printf("enter your choice: ");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
        printf("the addition between two numbers is %d",a+b);
        break;
    case 2:
        printf("the subtraction between two numbers is %d",a-b);
        break;
    case 3:
        printf("the multiplication between two numbers is %d",a*b);
        break;
    case 4:
        printf("the division between two numbers is %.2f",a/(float)b);
        break;
    default:
        printf("invalid choice");
    }
    return 0;
}