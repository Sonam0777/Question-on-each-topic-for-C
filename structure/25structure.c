#include <stdio.h>

int main() {
    union record {
        char name[20];
        int roll_no;
        float marks;
    };

    union record student;

    printf("Enter name: ");
    scanf("%s", student.name);

    printf("Enter Roll no: ");
    scanf("%d", &student.roll_no);

    printf("Enter marks: ");
    scanf("%f", &student.marks);

    printf("\nName\tRoll\tMarks\n");
    printf("%s\t%d\t%.2f", student.name, student.roll_no, student.marks);

    return 0;
}
