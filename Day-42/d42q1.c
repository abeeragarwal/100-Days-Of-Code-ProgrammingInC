// Count vowels and consonants in a string.
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int vowels = 0, consonants = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; i < strlen(str); i++) {
        char ch = str[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}