#include <stdio.h>
int main()
{
    int n;
    printf("enter how many person information you want to store: ");
    scanf("%d",&n);
    struct employee{
        char name[20];
        char address[40];
        int age;
        float salary;
    };
    struct employee a[n];
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nenter the info of %d student",i+1);
        getchar();
        printf("\nenter name");
        /* fgets(a[i].name,sizeof(a[i].name),stdin); */
        scanf("%[^\n]", a[i].name);
        printf("\nenter address");
        scanf(" %s", a[i].address);
        printf("\nenter age");
        scanf("%d",&a[i].age);
        printf("\nenter salary");
        scanf("%f",&a[i].salary);
    }
    float salary = 0;
    printf("\nthe details of studetns are ");
    printf("\nName\taddress\tAge\tsalary\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t%s\t%d\t%.2f\n",a[i].name,a[i].address,a[i].age,a[i].salary);
        salary = salary + a[i].salary;
    }
    float avg = salary/n;
    printf("\nthe average is %.2f",avg);
    return 0;
}