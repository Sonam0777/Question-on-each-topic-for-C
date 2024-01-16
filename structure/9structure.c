#include <stdio.h>
int main()
{
    struct record {
        int roll_no;
        char name[50];
        int class;
        float marks[5];
    };
    struct record n[10];
    float per[10];
    float total[10];
    int i,j;
    for(i=0;i<2;i++)
    {
        per[i]=0.0;
        total[i]=0.0;
        printf("enter the details of %d students\n",i+1);
        printf("enter the name: ");
        /* scanf("%s", n[i].name); */
        fgets(n[i].name, sizeof(n[i].name), stdin);
        printf("enter the roll_no ");
        scanf("%d",&n[i].roll_no);
        printf("enter the class ");
        scanf("%d",&n[i].class);
        printf("enter the marks of 5 subject \n");
        for(j=0;j<5;j++)
        {
            scanf("%f",&n[i].marks[j]);
            total[i] += n[i].marks[j];
        }
        per[i] = (total[i]/500)*100;
        getchar();
    }

    for(i=0;i<2;i++)
    {
        printf("Name = %s\n",n[i].name);
        printf("Roll No = %d\n",n[i].roll_no);
        printf("Class = %d\n",n[i].class);
        printf("marks of 5 subject \n");
        for(j=0;j<5;j++)
        {
            printf("%.2f\n",n[i].marks[j]);
        }
        printf("percentage  = %.2f\n",per[i]);
    }
    return 0;
}