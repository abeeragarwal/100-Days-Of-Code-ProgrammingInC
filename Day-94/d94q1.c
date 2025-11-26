//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>
#include <stdlib.h>
struct Student {
    char name[50];
    float marks;
    int roll_no;
};

void printStudent(struct Student**students, int n){
    for(int i = 0; i < n; i++){
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", (*students)[i].name);
        printf("Marks: %.2f\n", (*students)[i].marks);
        printf("Roll Number: %d\n", (*students)[i].roll_no);
    }

}

int main(){
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student* students = (struct Student*)malloc(n * sizeof(struct Student));
    for(int i = 0; i < n; i++){
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &students[i].marks);
        printf("Enter roll number of student %d: ", i + 1);
        scanf("%d", &students[i].roll_no);
    }
    printStudent(&students, n);
    free(students);
    return 0;
}