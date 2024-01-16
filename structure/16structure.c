#include <stdio.h>
void display(char a[], int, float);
int main()
{
    struct record{
        char name[20];
        int id;
        float salary;
    };
    struct record emp;

    printf("Enter Name: ");
    scanf("%s",emp.name);
    printf("enter id: ");
    scanf("%d",&emp.id);
    printf("enter salary: ");
    scanf("%f",&emp.salary);

    display(emp.name,emp.id,emp.salary);
    return 0;
}

void display(char a[], int id, float salary)
{
    printf("Name\tId no\tSalary\n");
    printf("%s\t%d\t%.2f",a,id,salary);
}