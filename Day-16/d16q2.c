// Write a program to check if a number is a palindrome.
#include <stdio.h>
int main() {
    int n, original, reversed = 0;
    printf("Enter a number n: ");
    scanf("%d", &n);
    original = n;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    if (original == reversed) {
        printf("The number is a palindrome.");
    } else {
        printf("The number is not a palindrome.");
    }
    return 0;
}