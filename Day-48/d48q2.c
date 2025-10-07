// Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>
int main(){
    char str[100], temp[100];
    int i, j, k, len;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    len = strlen(str);
    if(str[len-1] == '\n') str[len-1] = '\0'; // Remove newline character if present
    len = strlen(str); // Update length after removing newline
    i = 0;
    while(i < len){
        // Skip spaces
        while(i < len && str[i] == ' ') i++;
        j = i;
        // Find the end of the word
        while(j < len && str[j] != ' ') j++;
        // Reverse the word
        k = j - 1;
        int idx = 0;
        while(k >= i){
            temp[idx++] = str[k--];
        }
        temp[idx] = '\0';
        printf("%s", temp);
        // Print space if not at the end of the string
        if(j < len) printf(" ");
        i = j;
    }
    printf("\n");
    return 0;
}