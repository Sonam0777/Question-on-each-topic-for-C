#include <stdio.h>
int main()
{
    struct personal_record{
        char name[20];
            struct{
                int day_of_birth;
                int month_of_birth;
                int year_of_birth;
            } birthday;
    };
    struct personal_record person;

    printf("enter name: ");
    scanf("%s", person.name);
    printf("enter day of Birthday: ");
    scanf("%d", &person.birthday.day_of_birth);
    printf("enter month of Birthday: ");
    scanf("%d", &person.birthday.month_of_birth);
    printf("enter year of Birthday: ");
    scanf("%d", &person.birthday.year_of_birth);

    printf("\nEnter Name: %s",person.name);
    printf("\nDOB - %d-%d-%d",person.birthday.year_of_birth,person.birthday.month_of_birth,person.birthday.day_of_birth);
    return 0;
}