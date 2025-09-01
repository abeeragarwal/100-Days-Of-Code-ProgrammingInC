// Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c;
    printf("Enter the quadratic equation constants: ");
    scanf("%d %d %d", &a, &b, &c);
    double d = b*b - 4*a*c;
    int r1, r2;
    r1 = (-b + sqrt(d)) / (2*a);
    r2 = (-b - sqrt(d)) / (2*a);
    if (d>0) {
        printf("Roots are real and different: %d, %d", r1, r2);
    }else if (d==0){
        printf("Roots are real and same: %d", r1);
    }else{
        printf("Roots are complex");
    }
    return 0;
}