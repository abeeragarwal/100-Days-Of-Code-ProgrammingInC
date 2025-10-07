// Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>
int main(){
    char sentence[1000];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    // Remove newline character if present
    sentence[strcspn(sentence, "\n")] = 0;

    char *longestWord = NULL;
    int maxLength = 0;

    char *token = strtok(sentence, " ");
    while(token != NULL){
        int length = strlen(token);
        if(length > maxLength){
            maxLength = length;
            longestWord = token;
        }
        token = strtok(NULL, " ");
    }

    if(longestWord != NULL){
        printf("The longest word is: %s\n", longestWord);
    } else {
        printf("No words found in the sentence.\n");
    }

    return 0;
}