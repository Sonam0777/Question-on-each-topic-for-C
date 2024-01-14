#include <stdio.h>

int main()
{
    int c;
    printf("\nwhich of the websites you want to visit the most?");
    printf("\npress 1 for Facebook, 2 for Youtube and 3 for GOogle");
    printf("\n1=>Facebook\n2=>Youtube\n3=>Google");
    printf("\nenter your choice ");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        printf("You use Facebook!!");
        break;
        case 2:
        printf("You use Youtube!!");
        break;
        case 3:
        printf("You use Google!!");
        break;

        printf("invalid choice...");
    }
    return 0;
}