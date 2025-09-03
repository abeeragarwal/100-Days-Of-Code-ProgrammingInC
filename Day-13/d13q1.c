// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main () {
    int n1,n2;
    char op;
    printf("Enter two numbers and one operator in the same line with spaces: ");
    scanf("%d %d %c", &n1, &n2, &op);
    switch (op){
        case '+':
            int sum = n1 + n2;
            printf("The sum of %d and %d is %d.", n1, n2, sum);
            break;
        case '-':
            int diff = n1 - n2;
            printf("The difference of %d with %d is %d.", n1, n2, diff);
            break;
        case '*':
            int mul = n1 * n2;
            printf("The product of %d into %d is %d.", n1, n2, mul);
            break;
        case '/':
            int div = n1 / n2;
            printf("The quotient of %d by %d is %d.", n1, n2, div);
            break;
        case '%':
            int rem = n1 % n2;
            printf("The remainder of %d by %d is %d.", n1, n2, rem);
            break;
        default:
            printf("You entered the wrong operator.");
    }
    return 0;
}