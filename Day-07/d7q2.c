// Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
int main() {
    char letter;
    int isVowel = 0;
    char vowels[] = "aeiouAEIOU";
    printf("Enter a character: ");
    scanf(" %c", &letter);
    for (int i = 0; vowels[i] != '\0'; i++) {
        if (letter == vowels[i]) {
            isVowel = 1;
            break;
        }
    }
    if (isVowel) {
        printf("%c is a vowel.\n", letter);
    } else {
        printf("%c is a consonant.\n", letter);
    }
}