// Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
int main(){
    char n[64];
    printf("Enter the number: ");
    scanf("%64s", &n);
    for (int i=0; n[i]!='\0'; i++){
        switch (n[i]){
            case '0':
                n[i] = '1';
                break;
            case '1':
                n[i] = '0';
                break;
            default:
                printf("The number is not in correct binary representation.");
        }
    }
    printf("%s", n);
    return 0;
}