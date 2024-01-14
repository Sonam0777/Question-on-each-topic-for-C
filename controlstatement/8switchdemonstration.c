#include <stdio.h>

int main()
{
    int n;
    printf("enter any number ");
    scanf("%d",&n);

    switch(n)
    {
        case 1:
        case 2:
        printf("1 or 2?");
        break;
        case 3:
        case 4:
        printf("3 or 4?");
        break;
        case 5:
        case 6:
        printf("5 or 6?");
        printf("or may be 3 or 4");
        break;
        default:
        printf("\ninvalid choice");
    }
    return 0;
}