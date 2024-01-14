#include <stdio.h>
int main()
{
    struct student 
    {
        char name[50];
        int roll;
        float marks;
        char remarks[50];
    };
    struct student n;
    printf("enter name : ");
    gets(n.name);
    printf("\nenter roll no: ");
    scanf(" %d",&n.roll);
    printf("\nenter marks: ");
    scanf(" %f",&n.marks);
    getchar();
    printf("\nenter remarks ");
    fgets(n.remarks, sizeof(n.remarks), stdin);

    printf("\nName\tRoll no\tMarks\tRemarks\n");
    printf("**************************************");
    printf("\n%s\t%d\t%.2f\t%s",n.name,n.roll,n.marks,n.remarks);
    return 0;
}