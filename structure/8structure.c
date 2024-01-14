#include <stdio.h>
#define N 20
int main()
{
    struct read{
        char name[20];
        int roll;
        float marks[3];
    };
    struct read student[N],temp;

    int i,j,n;
    printf("enter how many students ");
    scanf("%d",&n);
    float total1,total2;

    for(i=0;i<n;i++)
    {
        printf("enter the detail of %d student.",i+1);
        printf("enter name: ");
        scanf("%s",student[i].name);
        printf("enter roll no: ");
        scanf("%d",&student[i].roll);
        for(j=0;j<3;j++)
        {
            printf("enter marks of %d subject: ",j+1);
            scanf("%f", &student[i].marks[j]);
        }
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            total1=total2=0.0;
            for(int k = 0;k<3;k++)
            {
                total1 += student[j].marks[k];
                total2 += student[j+1].marks[k];
            }
            if(total1 > total2)
            {
                temp = student[j];
                student[j] = student[j+1];
                student[j+1] = temp;
            }
        }
        printf("sorted list is:\n");
        for(i=0;i<n;i++)
        {
            printf("Name: %s\n", student[i].name);
            printf("Roll No: %d\n", student[i].roll);
            printf("Marks in three subjects:\n");
            for(j=0;j<3;j++)
            {
                printf("%.2f\n",student[i].marks[j]);
            }
        }
    }
    return 0;
}