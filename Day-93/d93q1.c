// Find and print the student with the highest marks.
#include <stdio.h>
#include <stdlib.h>
struct Student {
    char name[50];
    int marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student* students = (struct Student*)malloc(n * sizeof(struct Student));
    for (int i = 0; i < n; i++) {
        printf("Enter first name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }
    struct Student* top_student = &students[0];
    for (int i = 1; i < n; i++) {
        if (students[i].marks > top_student->marks) {
            top_student = &students[i];
        }
    }
    printf("Top student: %s with marks %d\n", top_student->name, top_student->marks);
    free(students);
    return 0;
}