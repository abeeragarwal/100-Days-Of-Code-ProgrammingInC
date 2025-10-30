// Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>

int main(void) {
    char s[200005]; printf("Enter string: "); if (scanf("%200000s", s) != 1) return 0;
    int last[256]; for (int i = 0; i < 256; i++) last[i] = -1;
    int best = 0, start = 0;
    for (int i = 0; s[i]; i++) {
        unsigned char c = (unsigned char)s[i];
        if (last[c] >= start) start = last[c] + 1;
        last[c] = i;
        int len = i - start + 1; if (len > best) best = len;
    }
    printf("%d\n", best);
    return 0;
}
