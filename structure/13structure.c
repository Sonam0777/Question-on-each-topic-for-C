#include <stdio.h>
#include <string.h>
#define N 100
int main()
{
    struct record{
        int roll_no;
        char name[50];
        char faculty[10];
        struct {
            int day_of_birth;
            int month_of_birth;
            int year_of_birth;
        } birthday;
    };
    struct record person[N];
    int i;

    for(i=0;i<2;i++)
    {
        printf("enter the details of %d employee\n",i+1);
        printf("enter roll_n0 ");
        scanf("%d",&person[i].roll_no);
        printf("enter Name: ");
        scanf("%s", person[i].name);
        getchar();
        printf("enter faculty: ");
        scanf("%s", person[i].faculty);
        printf("enter day of birth: ");
        scanf("%d",&person[i].birthday.day_of_birth);
        printf("enter month of birth: ");
        scanf("%d",&person[i].birthday.month_of_birth);
        printf("enter year of birth: ");
        scanf("%d",&person[i].birthday.year_of_birth);
    }

    printf("\nRoll Number\tName\t\tFaculty\t\tDOB\n");
    printf("********************************************\n");
    for(i=0;i<2;i++)
    {
        if(strcmp(person[i].faculty,"BCA")==0){
        printf("%d\t\t%s\t\t%s\t\t%d-%d-%d\n",person[i].roll_no,person[i].name,person[i].faculty,person[i].birthday.year_of_birth,person[i].birthday.month_of_birth,person[i].birthday.day_of_birth);
        }

        
    }
    return 0;
}