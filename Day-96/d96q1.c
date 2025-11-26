//Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>
#include <stdlib.h>
struct Employee{
    char name[50];
    int id;
    struct Date{
        int day;
        int month;
        int year;
    }joiningDate;
};
int main(){
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct Employee* employees = (struct Employee*)malloc(n * sizeof(struct Employee));
    for(int i = 0; i < n; i++){
        printf("Enter details for employee %d\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Joining Date (DD MM YYYY): ");
        scanf("%d %d %d", &employees[i].joiningDate.day, &employees[i].joiningDate.month, &employees[i].joiningDate.year);
    }
    printf("\nEmployee Details:\n");
    for(int i = 0; i < n; i++){
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("ID: %d\n", employees[i].id);
        printf("Joining Date: %02d/%02d/%04d\n", employees[i].joiningDate.day, employees[i].joiningDate.month, employees[i].joiningDate.year);
    }
}