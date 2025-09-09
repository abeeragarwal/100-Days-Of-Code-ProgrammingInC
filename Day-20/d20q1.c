// Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main() {
    int num, res=1, temp;
    printf("Enter the number: ");
    scanf("%d", &num);
    while (num!=0){
        temp = num % 10;
        if (temp % 2 == 1){
            res*=temp;
        }
        num/=10;
    }
    printf("%d", res);
    return 0;
}