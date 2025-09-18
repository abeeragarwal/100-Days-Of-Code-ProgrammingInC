// Write a program to check if a number is a strong number.
#include <stdio.h>

int main(){
    int n, temp, res = 0, original, fact, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    // Calculate sum of factorials of digits
    while (n != 0){
        temp = n % 10;
        fact = 1;
        for (i = 1; i <= temp; i++) {
            fact *= i;
        }
        res += fact;
        n /= 10;
    }
    if (res == original){
        printf("Strong Number");
    }else{
        printf("Not a Strong Number");
    }
    return 0;
}