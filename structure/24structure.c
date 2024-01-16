#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct record{
        char name[20];
        int roll;
        char grade;
        char gender;
        int age;
    };
    struct record student[10];
    int i;

    int option;
    char choice = 'y';

    printf("Menu Driven Program");
    printf("\n Enter 1 for inputting student information.");
    printf("\n Enter 2 to display all male student.");
    printf("\n Enter 3 for exit");

    while(choice!='n')
    {
        printf("\n Enter your option: ");
        scanf("%d",&option);

        switch(option)
        {
            case 1:
                for(i=0;i<2;i++)
                {
                    printf("enter the details of %d students.\n",i+1);
                    printf("Enter name: ");
                    scanf("%s", student[i].name);
                    printf("Enter Roll no: ");
                    scanf("%d",&student[i].roll);
                    getchar();
                    printf("Enter gender: ");
                    scanf("%c",&student[i].gender);
                    printf("Enter age: ");
                    scanf("%d",&student[i].age);
                    getchar();
                    printf("Enter grade: ");
                    scanf("%c",&student[i].grade);
                }
                break;
            case 2:
                printf("\nList of Male Students: ");
                for(i=0;i<2;i++)
                {
                    if(student[i].gender == 'M')
                    {
                        printf("\n%s\n",student[i].name);
                    }
                }
            case 3:
                exit(0);
            
            default:
                    printf("Invalid Option!!!");
        }
        printf("Do you want to continue(y/n)");
        scanf(" %c",&option);
    }
    return 0;
}