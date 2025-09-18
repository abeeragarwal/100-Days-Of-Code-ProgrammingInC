// Write a program to print the following pattern:
/*
*
***
*****
*******
*********
*******
*****
***
*
*/
#include <stdio.h>
int main() {
    int n = 5; // Number of rows for the upper half of the pattern
    // Print the upper half of the pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    // Print the lower half of the pattern
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}