// Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>
int main(){
    char str1[100], str2[100];
    int count[256] = {0}; // Assuming ASCII character set
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    // Remove newline characters if present
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    if(strlen(str1) != strlen(str2)){
        printf("The strings are not anagrams.\n");
        return 0;
    }

    for(int i = 0; str1[i] && str2[i]; i++){
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    for(int i = 0; i < 256; i++){
        if(count[i] != 0){
            printf("The strings are not anagrams.\n");
            return 0;
        }
    }

    printf("The strings are anagrams.\n");
    return 0;
}