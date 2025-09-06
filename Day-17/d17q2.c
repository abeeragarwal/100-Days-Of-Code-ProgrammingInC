// Write a program to check if a number is prime.
#include <stdio.h>
int main() {
    int n, i, isPrime = 1;
    printf("Enter a number n: ");
    scanf("%d", &n);
    
    if (n <= 1) {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0; // Found a divisor, not prime
                break;
            }
        }
    }
    
    if (isPrime) {
        printf("The number is prime.");
    } else {
        printf("The number is not prime.");
    }
    
    return 0;
}