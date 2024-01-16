#include <stdio.h>

struct record{
        char name[20];
        int id;
        float salary;
    };
void display(struct record *e);
int main()
{
    struct record emp;
    printf("enter name: ");
    scanf("%s", emp.name);
    printf("enter id: ");
    scanf("%d",&emp.id);
    printf("enter salary: ");
    scanf("%f",&emp.salary);

    display(&emp);
    return 0;
}

void display(struct record *e)
{
    printf("Name\tId\tSalary\n");
    printf("%s\t%d\t%.2f",e->name,e->id,e->salary);
}