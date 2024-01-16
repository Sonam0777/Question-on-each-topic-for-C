#include <stdio.h>

struct record{
        char name[20];
        int id_no;
        float salary;
    };

void display(struct record e);
int main()
{
    struct record emp;
    printf("enter name: ");
    scanf("%s",emp.name);
    printf("enter Id_n0: ");
    scanf("%d",&emp.id_no);
    printf("enter salary: ");
    scanf("%f",&emp.salary);

    display(emp);
    return 0;
}

void display(struct record e)
{
    printf("Name\tId No\tSalary\n");
    printf("%s\t%d\t%.2f",e.name,e.id_no,e.salary);
}