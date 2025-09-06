// Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>
int main() {
    int n, original, sum = 0, digits = 0;
    printf("Enter a number n: ");
    scanf("%d", &n);
    original = n;
    
    // Count the number of digits
    while (n > 0) {
        digits++;
        n /= 10;
    }
    
    n = original; // Reset n to original value
    
    // Calculate the sum of the cubes of each digit
    while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, digits);
        n /= 10;
    }
    
    // Check if the sum is equal to the original number
    if (sum == original) {
        printf("The number is an Armstrong number.");
    } else {
        printf("The number is not an Armstrong number.");
    }
    
    return 0;
}