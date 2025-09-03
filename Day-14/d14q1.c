// Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main() {
    int n, sum = 0, count = 0, i = 1;
    printf("Enter a number n: ");
    scanf("%d", &n);
    while (count < n) {
        sum += i;
        i += 2;
        count++;
    }
    printf("%d", sum);
    return 0;
}