//Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
#include <stdio.h>
#include <ctype.h>
int main() {
    char filename[100];
    FILE *file;
    char ch;
    int charCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0;

    // Ask the user for a filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        charCount++;

        // Count lines
        if (ch == '\n') {
            lineCount++;
        }

        // Count words
        if (isspace(ch)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            wordCount++;
        }
    }

    // If the file is not empty and does not end with a newline, count the last line
    if (charCount > 0 && ch != '\n') {
        lineCount++;
    }

    // Close the file
    fclose(file);

    // Display the results
    printf("Total Characters: %d\n", charCount);
    printf("Total Words: %d\n", wordCount);
    printf("Total Lines: %d\n", lineCount);

    return 0;
}