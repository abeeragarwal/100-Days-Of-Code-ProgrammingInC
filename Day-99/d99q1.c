//Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h>
struct Student{
    char name[50];
    int roll;
    float marks;
};
int main(){
    int n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    
    struct Student *students;
    students = (struct Student*)malloc(n * sizeof(struct Student));
    if(students == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    
    for(int i = 0; i < n; i++){
        printf("Enter details of student %d\n", i+1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    
    printf("\nStudent Details:\n");
    for(int i = 0; i < n; i++){
        printf("Student %d:\n", i+1);
        printf("Name: %s\n", students[i].name);
        printf("Roll: %d\n", students[i].roll);
        printf("Marks: %.2f\n", students[i].marks);
    }
    
    free(students);
    return 0;
}