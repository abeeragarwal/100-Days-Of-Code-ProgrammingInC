// Write a program to assign grades based on a percentage input.
#include <stdio.h>
int main() {
    int stPercentage;
    char grade;
    printf("Enter the Student's Percentage: ");
    scanf("%d", &stPercentage);
    if (stPercentage >= 90){
        printf("Grade A");
    } else if (stPercentage >= 80){
        printf("Grade B");
    } else if (stPercentage >= 70){
        printf("Grade C");
    } else if (stPercentage >= 60){
        printf("Grade D");
    } else{
        printf("Grade F");
    }
    return 0;
}