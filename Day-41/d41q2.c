// Print each character of a string on a new line.
#include <stdio.h>
int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Print each character until the null terminator is found
    while (str[i] != '\0') {
        // Skip printing the newline character added by fgets
        if (str[i] != '\n') {
            printf("%c\n", str[i]);
        }
        i++;
    }

    return 0;
}