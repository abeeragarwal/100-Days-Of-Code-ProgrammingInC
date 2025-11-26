// Store details of 5 students in an array of structures and print all in a tabular format
#include <stdio.h>
#include <stdlib.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
int main(){
    struct Student students[5];
    for(int i=0; i<5; i++){
        printf("Enter details for student %d\n", i+1);
        printf("Enter name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_no);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
        getchar(); // to consume the newline character after scanf
    }
    printf("Student Details:\n");
    for(int i=0; i<5; i++){
        printf("Name: %s | Roll: %d | Marks: %.2f\n", students[i].name, students[i].roll_no, students[i].marks);
    }
    return 0;
}