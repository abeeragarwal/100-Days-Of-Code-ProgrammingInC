// Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

#include <stdio.h>
#include <string.h>

int main(void) {
    char s[200005], t[200005]; printf("Enter s and t: ");
    if (scanf("%200000s %200000s", s, t) != 2) return 0;
    if (strlen(s) != strlen(t)) { printf("Not Anagram\n"); return 0; }
    int cnt[26] = {0};
    for (int i = 0; s[i]; i++) { cnt[s[i]-'a']++; cnt[t[i]-'a']--; }
    for (int i = 0; i < 26; i++) if (cnt[i] != 0) { printf("Not Anagram\n"); return 0; }
    printf("Anagram\n");
    return 0;
}
