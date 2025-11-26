// Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
void writeEmployeeData(const char *filename, struct Employee *emp) {
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        perror("Unable to open file for writing");
        return;
    }
    fwrite(emp, sizeof(struct Employee), 1, file);
    fclose(file);
}
void readEmployeeData(const char *filename, struct Employee *emp) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        perror("Unable to open file for reading");
        return;
    }
    fread(emp, sizeof(struct Employee), 1, file);
    fclose(file);
}
int main(){
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct Employee *employees = malloc(n * sizeof(struct Employee));
    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d (ID Name Salary): ", i + 1);
        scanf("%d %s %f", &employees[i].id, employees[i].name, &employees[i].salary);
        writeEmployeeData("employees.dat", &employees[i]);
    }
    printf("\nEmployee Details from file:\n");
    struct Employee emp;
    for (int i = 0; i < n; i++) {
        readEmployeeData("employees.dat", &emp);
        printf("ID: %d, Name: %s, Salary: %.2f\n", emp.id, emp.name, emp.salary);
    }
    free(employees);
    return 0;
}