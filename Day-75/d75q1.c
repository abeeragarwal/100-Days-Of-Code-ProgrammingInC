//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *file;
    char filename[100];
    char text[256];

    // Ask the user for a filename
    printf("Enter the filename to open in append mode: ");
    scanf("%s", filename);

    // Open the file in append mode
    file = fopen(filename, "a");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // Clear input buffer before taking new line input
    while (getchar() != '\n');

    // Ask the user for a new line of text
    printf("Enter a line of text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append the text to the file
    fputs(text, file);

    // Close the file
    fclose(file);

    printf("Text appended successfully.\n");
    return EXIT_SUCCESS;
}