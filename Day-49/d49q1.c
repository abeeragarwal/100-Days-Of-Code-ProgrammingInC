// Print the initials of a name.
#include <stdio.h>
#include <string.h>
int main(){
    char fullname[1000];
    printf("Enter your name: ");
    fgets(fullname, sizeof(fullname), stdin);

    int first = 1;
    for (int i = 0; fullname[i] != '\0'; i++) {
        if ((i == 0 && fullname[i] != ' ' && fullname[i] != '\n') ||
            (fullname[i-1] == ' ' && fullname[i] != ' ' && fullname[i] != '\n')) {
            if (!first) printf(" ");
            printf("%c.", fullname[i]);
            first = 0;
        }
    }
    printf("\n");
    return 0;
}