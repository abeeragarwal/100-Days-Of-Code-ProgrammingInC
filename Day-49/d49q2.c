// Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
int main(){
    char fullname[1000];
    printf("Enter your name: ");
    fgets(fullname, sizeof(fullname), stdin);

    size_t len = strlen(fullname);
    if (len > 0 && fullname[len-1] == '\n') {
        fullname[len-1] = '\0';
    }

    int last_space = -1;
    for (int i = 0; fullname[i] != '\0'; i++) {
        if (fullname[i] == ' ')
            last_space = i;
    }

    int first = 1;
    for (int i = 0; i < len; i++) {
        if ((i == 0 && fullname[i] != ' ') ||
            (i > 0 && fullname[i-1] == ' ' && fullname[i] != ' ')) {
            if (i > last_space) {
                if (!first) printf(" ");
                if (fullname[i] >= 'a' && fullname[i] <= 'z')
                    printf("%c", fullname[i] - ('a' - 'A'));
                else
                    printf("%c", fullname[i]);
                for (int j = i+1; fullname[j] != '\0'; j++) {
                    printf("%c", fullname[j]);
                }
                break;
            } else {
                if (!first) printf(" ");
                printf("%c.", (fullname[i] >= 'a' && fullname[i] <= 'z') ? fullname[i] - ('a' - 'A') : fullname[i]);
                first = 0;
            }
        }
    }
    printf("\n");
    return 0;
}