// Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main(){
    int n, mul=1;
    printf("Enter a number n: ");
    scanf("%d", &n);
    for (int i = 2; i<=n; i+=2){
        mul *= i;
    }
    printf("%d", mul);
    return 0;
}