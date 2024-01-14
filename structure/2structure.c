#include <stdio.h>
int main()
{
    struct employee 
    {
        char name[20];
        int roll_no;
        float marks;
        char gender;
        long long int phone_no;
    };
    struct employee str1 ={"Sonam",1,98,'M',9825782100};
    printf("Name\tRoll no\tMarks\tGender\tPhone_Number\n");
    printf("\n.............................................\n");
    printf("%s\t%d\t%.2f\t%c\t%lld",str1.name,str1.roll_no,str1.marks,str1.gender,str1.phone_no);
    return 0;
}