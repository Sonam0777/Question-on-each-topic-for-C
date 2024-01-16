#include <stdio.h>
int main()
{
    int n;
    printf("enter the no of students info you want to store: ");
    scanf("%d",&n);
    struct record{
        char name[50];
        int roll;
        int marks[3];
    };
    struct record student[n],temp;

    int i,j,k;
    int total1,total2;

    for(i=0;i<n;i++)
    {
        printf("enter the info of %d students\n",i+1);
        printf("enter name: ");
        /* fgets(student[i].name, sizeof(student[i].name), stdin); */
        scanf("%s", student[i].name);
        printf("enter Roll no: ");
        scanf("%d",&student[i].roll);
        printf("enter the marks of three subject \n");
        for(j=0;j<3;j++)
        {
            scanf("%d",&student[i].marks[j]);
        }
        getchar();
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            total1=total2= 0;
                for(k=0;k<3;k++)
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
        printf("sorted list: \n");
        for(i=0;i<n;i++)
        {
            printf("Name: %s\n",student[i].name);
            printf("Roll: %d\n",student[i].roll);
            printf("the marks of three subject\n");
                for(j=0;j<3;j++)
                {
                    printf("%d\n",student[i].marks[j]);
                }
        }   
    }
    return 0;
}