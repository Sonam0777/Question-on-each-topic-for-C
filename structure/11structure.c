#include <stdio.h>
#include <string.h>

int main()
{
    struct record{
        char name[20];
        char address[20];
        float salary;
    };
    struct record employee[5],temp;

    int i,j;
    for(i=0;i<3;i++)
    {
        printf("enter details of %d student\n",i+1);
        printf("enter the name: ");
        scanf("%s", employee[i].name);
        getchar();
        printf("enter address: ");
        scanf("%s", employee[i].address);
        printf("eneter salar: ");
        scanf("%f",&employee[i].salary);
    }

    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(strcmp(employee[i].name,employee[j].name)>0)
            {
                temp = employee[i];
                employee[i] = employee[j];
                employee[j] = temp;
            }
        }
    }
    printf("\n employee list in ascending order of name:\n ");
    printf("Emp. Name\t Address \t\t Salary");
    for(i=0;i<3;i++)
    {
        printf("\n%s\t\t%s\t\t%.2f", employee[i].name,employee[i].address,employee[i].salary);
    }
    return 0;
}