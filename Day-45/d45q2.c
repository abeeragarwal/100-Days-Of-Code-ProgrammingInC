// Toggle case of each character in a string.
#include <stdio.h>
#include <string.h>
#define MAX 100
int main()
{
    char str[MAX];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character if present

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - ('a' - 'A'); // Convert to uppercase
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + ('a' - 'A'); // Convert to lowercase
    }

    printf("Toggled case string: %s\n", str);
    return 0;
}