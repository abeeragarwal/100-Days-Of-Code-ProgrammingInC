//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>
#include <stdlib.h>
#define MAX_NAME_LENGTH 50
struct Student {
    char name[MAX_NAME_LENGTH];
    int rollNumber;
    float marks;
};
void writeStudentRecords(const char *filename, struct Student *students, int count) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return;
    }
    for (int i = 0; i < count; i++) {
        fprintf(file, "%s %d %.2f\n", students[i].name, students[i].rollNumber, students[i].marks);
    }
    fclose(file);
}
void readStudentRecords(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return;
    }

    struct Student student;
    printf("Student Records:\n");
    while (fscanf(file, "%s %d %f", student.name, &student.rollNumber, &student.marks) != EOF) {
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n", student.name, student.rollNumber, student.marks);
    }
    fclose(file);
}
int main() {
    struct Student students[] = {
        {"Alice", 1, 85.5},
        {"Bob", 2, 90.0},
        {"Charlie", 3, 78.5}
    };
    int count = sizeof(students) / sizeof(students[0]);
    const char *filename = "students.txt";

    writeStudentRecords(filename, students, count);
    readStudentRecords(filename);

    return 0;
}