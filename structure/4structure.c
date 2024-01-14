#include <stdio.h>

int main() {
    struct student {
        char name[10];
        int roll;
        float marks;
        char remarks;
    };

    struct student n[3];
    int i;

    for(i = 0; i < 3; i++) {
        printf("\nEnter the details of student %d", i+1);
        printf("\nEnter the name of student %d: ", i+1);
        fgets(n[i].name, sizeof(n[i].name), stdin);
        printf("Enter the roll of student %d: ", i+1);
        scanf(" %d", &n[i].roll);
        printf("Enter the marks of student %d: ", i+1);
        scanf("%f", &n[i].marks);
        /* getchar(); */ // Consume the newline character left in the input buffer
        printf("Enter the remarks of student %d (p=pass/f=fail): ", i+1);
        scanf(" %c", &n[i].remarks);
        getchar();
    }

    printf("\nName\tRoll_no\tMarks\tRemarks");
    printf("\n*********************************\n");

    for(i = 0; i < 3; i++) {
        printf("%s\t%d\t%.2f\t%c\n", n[i].name, n[i].roll, n[i].marks, n[i].remarks);
    }

    return 0;
}
