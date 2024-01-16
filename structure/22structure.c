#include <stdio.h>
int main()
{
    int n;
    printf("enter how many student record you want to store: ");
    scanf("%d",&n);
    struct record{
        int roll;
        char name[20];
        float percentage;
    };
    struct record student[n];

    int i;

    for(i=0;i<n;i++)
    {
        printf("enter the details of %d studetn \n",i+1);
        printf("enter name: ");
        scanf("%s", student[i].name);
        printf("enter roll number: ");
        scanf("%d",&student[i].roll);
        printf("enter percentage: ");
        scanf("%f",&student[i].percentage);
    }

    printf("Name\tRoll no.\tPercentage\n");
    for(i=0;i<n;i++)
    {
        if(student[i].percentage >= 80.00)
        {
            printf("%s\t%d\t%.2f\n",student[i].name,student[i].roll,student[i].percentage);
        }
    }
    return 0;
}