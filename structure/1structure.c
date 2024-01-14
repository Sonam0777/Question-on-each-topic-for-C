#include <stdio.h>
int main()
{
    struct employee
    {
        int id;
        char name[20];
        char sex;
        float salary;
    };
    struct employee n;

    printf("\nenter the id of person ");
    scanf("%d",&n.id);
    printf("\nenter the name of person ");
    scanf("%s", n.name);
    /* getchar(); */
    printf("\nenter the sex of person ");
    scanf(" %c",&n.sex);
    printf("\nenter the salary of person ");
    scanf("%f",&n.salary);

    printf("ID\tName\tsex\tsalary\t\n");
    printf("..............................................\n");
    printf("%d\t%s\t%c\t%.2f",n.id,n.name,n.sex,n.salary);
    return 0;
}