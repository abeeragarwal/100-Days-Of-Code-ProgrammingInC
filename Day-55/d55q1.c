// Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than floor(n/2) times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
//
// Follow-up (optional): Can you do it in O(n) Time Complexity?

#include <stdio.h>

int main(void) {
    int n; printf("Enter n: "); if (scanf("%d", &n) != 1 || n <= 0) { printf("-1\n"); return 0; }
    int a[200000]; if (n > 200000) n = 200000;
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int cand = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) { cand = a[i]; count = 1; }
        else if (a[i] == cand) count++;
        else count--;
    }
    int freq = 0; for (int i = 0; i < n; i++) if (a[i] == cand) freq++;
    if (freq > n/2) printf("%d\n", cand); else printf("-1\n");
    return 0;
}
