//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>
#include <stdlib.h>
int main() {
    char sourceFileName[100], destFileName[100];
    FILE *sourceFile, *destFile;
    int ch;

    // Get source and destination file names from user
    printf("Enter source file name: ");
    scanf("%s", sourceFileName);
    printf("Enter destination file name: ");
    scanf("%s", destFileName);

    // Open source file in read mode
    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        perror("Error opening source file");
        return EXIT_FAILURE;
    }

    // Open destination file in write mode
    destFile = fopen(destFileName, "w");
    if (destFile == NULL) {
        perror("Error opening destination file");
        fclose(sourceFile);
        return EXIT_FAILURE;
    }

    // Copy content from source to destination
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("Content copied from %s to %s successfully.\n", sourceFileName, destFileName);

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    return EXIT_SUCCESS;
}