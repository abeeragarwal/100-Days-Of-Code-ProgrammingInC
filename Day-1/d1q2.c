// Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main(){
    int num1, num2, sum, diff, prod, quot;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    quot = num1 / num2;
    printf("Sum: %d, Difference: %d, Product: %d, Quotient: %d\n", sum, diff, prod, quot);
}