// Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <string.h>
int main(){
    char number[100];
    printf("Enter the number: ");
    scanf("%s", number);
    int len = strlen(number);
    if (number){
        char temp = number[0];
        number[0] = number[len-1];
        number[len-1] = temp;
    }
    printf("%s", number);
    return 0;
}