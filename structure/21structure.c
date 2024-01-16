#include <stdio.h>
#include <string.h>

int main()
{
    struct record{
        char name[20];
        char address[20];
        float salary;
    };
    struct record emp[10], temp;
    int i,j;

    for(i=0;i<2;i++)
    {
        printf("enter the details of %d employee\n",i+1);
        printf("enter Name: ");
        scanf("%s",emp[i].name);
        getchar();
        printf("enter address: ");
        scanf("%s", emp[i].address);
        printf("enter salary: ");
        scanf("%f", &emp[i].salary);
    }

    for(i=0;i<2;i++)
    {
        for(j=i+1;j<2;j++)
        {
            if(strcmp(emp[i].name,emp[j].name)>0)
            {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }

    for(i=0;i<2;i++)
    {
        printf("name = %s\n", emp[i].name);
        printf("address = %s\n", emp[i].address);
        printf("salary = %.2f\n", emp[i].salary);
    }
    return 0;
}