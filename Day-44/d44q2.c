// Replace spaces with hyphens in a string.
#include <stdio.h>
#include <string.h>
void replaceSpaces(char str[]){
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==' '){
            str[i]='-';
        }
    }
}
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    replaceSpaces(str);
    printf("Modified string: %s", str);
    return 0;
}