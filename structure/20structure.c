#include <stdio.h>
struct record{
        char name[20];
        int id;
        float salary;
    };
    void display(struct record e[]);
int main()
{
    struct record emp[2];
    int i;
    for(i=0;i<2;i++)
    {
    printf("enter name: ");
    scanf("%s",emp[i].name);
    printf("enter id: ");
    scanf("%d",&emp[i].id);
    printf("enter salary: ");
    scanf("%f",&emp[i].salary);
    }
    display(emp);
    return 0;
}

void display(struct record e[])
{
    int i;
    printf("Name\tId\tsalary\n");
    for(i=0;i<2;i++)
    {
        printf("%s\t%d\t%.2f",e[i].name,e[i].id,e[i].salary);
    }
}