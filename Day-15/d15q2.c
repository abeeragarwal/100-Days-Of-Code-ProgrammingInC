// Write a program to reverse a given number.
#include <stdio.h>
int main(){
    int n, temp=0;
    printf("Enter a number n: ");
    scanf("%d", &n);
    while (n>0){
        temp = temp * 10 + n % 10;
        n /= 10;
    }
    printf("Reversed number: %d", temp);
    return 0;
}