// Return a structure containing top student's details from a function.
#include <stdio.h>
#include <stdlib.h>
struct Student {
    char name[50];
    float roll_no;
    int marks;
};

void getTopStudent(struct Student* students, int n, struct Student* top_student) {
    *top_student = students[0];
    for (int i = 1; i < n; i++) {
        if (students[i].marks > top_student->marks) {
            *top_student = students[i];
        }
    }
}
int main(){
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student* students = (struct Student*)malloc(n * sizeof(struct Student));
    for (int i = 0; i < n; i++) {
        printf("Enter first name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter roll number of student %d: ", i + 1);
        scanf("%f", &students[i].roll_no);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }
    struct Student top_student;
    getTopStudent(students, n, &top_student);
    printf("Top student: %s with roll number %.2f and marks %d\n", top_student.name, top_student.roll_no, top_student.marks);
    free(students);
    return 0;
}