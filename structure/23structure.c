#include <stdio.h>
#define n 10
struct record{
    char name[20];
    int id;
    float salary;
};

void input(struct record e[]);
void display(struct record e[]);

int main()
{
   struct record emp[n]; 
    input(emp);
    display(emp);
   return 0;
}

void input(struct record e[])
{
    int i;
    for(i=0;i<2;i++)
    {
        printf("enter the detail of %d student.\n",i+1);
        printf("Enter name: ");
        scanf("%s", e[i].name);
        printf("ENter id number: ");
        scanf("%d",&e[i].id);
        printf("Enter salary: ");
        scanf("%f",&e[i].salary);
    }
}

void display(struct record e[])
{
    int i;
    printf("Name\tIdno.\tSalary\n");
    for(i=0;i<2;i++)
    {
        printf("%s\t%d\t%.2f\n",e[i].name,e[i].id,e[i].salary);
    }
}