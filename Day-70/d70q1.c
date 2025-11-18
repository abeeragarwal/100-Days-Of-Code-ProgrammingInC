// Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_LENGTH 1000
void to_sentence_case(char *str) {
    int len = strlen(str);
    int new_sentence = 1; // Flag to indicate the start of a new sentence

    for (int i = 0; i < len; i++) {
        if (new_sentence && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            new_sentence = 0;
        } else {
            str[i] = tolower(str[i]);
        }

        // Check for sentence-ending punctuation
        if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            new_sentence = 1;
        }
    }
}
int main() {
    char str[MAX_LENGTH];

    printf("Enter a string: ");
    fgets(str, MAX_LENGTH, stdin);

    // Remove the newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    to_sentence_case(str);

    printf("Sentence case: %s\n", str);
    return 0;
}
