// Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>
int main() {
    int a, sum=0;
    printf("Enter a number: ");
    scanf("%d", &a);
    for (int i=1; i<=a; i++){
        sum+=i;
    }
    printf("sum=%d", sum);
    return 0;
}
