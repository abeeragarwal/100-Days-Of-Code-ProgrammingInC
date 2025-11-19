//Define a structure Student with name, roll_no, and marks, then read and print one student's data.
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main(){
    struct Student student;

    printf("Enter name: ");
    fgets(student.name, sizeof(student.name), stdin);
    printf("Enter roll number: ");
    scanf("%d", &student.roll_no);
    printf("Enter marks: ");
    scanf("%f", &student.marks);
    printf("Name: %s | Roll: %d | Marks: %.2f\n", student.name, student.roll_no, student.marks);

    return 0;


}