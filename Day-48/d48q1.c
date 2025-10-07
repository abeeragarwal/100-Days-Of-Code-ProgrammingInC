// Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>
int main(){
    char str1[100], str2[100];
    int len1, len2, i, flag = 0;
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove newline character
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove newline character
    len1 = strlen(str1);
    len2 = strlen(str2);
    if(len1 != len2){
        printf("Strings are not rotations of each other.\n");
        return 0;
    }
    for(i = 0; i < len1; i++){
        if(strncmp(str1, str2 + i, len1 - i) == 0 && strncmp(str1 + len1 - i, str2, i) == 0){
            flag = 1;
            break;
        }
    }
    if(flag)
        printf("Strings are rotations of each other.\n");
    else
        printf("Strings are not rotations of each other.\n");
    return 0;
}