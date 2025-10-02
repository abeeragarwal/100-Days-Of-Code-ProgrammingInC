// Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>

int palindrome(char str[], int len){
    for(int i=0; i<len/2; i++){
        if(str[i] != str[len-i-1]){
            return 0; // Not a palindrome
        }
    }
    return 1; // Is a palindrome
}
int main(){
    char str[100];
    int len;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    len = strlen(str);
    if (palindrome(str, len-1))
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
    return 0;
}
