// Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
//
// Follow-up(optional): Try to solve this in O(n) TC

#include <stdio.h>

int main(void) {
    int n;
    printf("Enter array size: ");
    if (scanf("%d", &n) != 1 || n <= 0) { printf("-1\n"); return 0; }
    int a[100000];
    if (n > 100000) n = 100000;
    printf("Enter %d integers: ", n);
    long long total = 0;
    for (int i = 0; i < n; i++) { scanf("%d", &a[i]); total += a[i]; }
    long long left = 0;
    int ans = -1;
    for (int i = 0; i < n; i++) {
        long long right = total - left - a[i];
        if (left == right) { ans = i; break; }
        left += a[i];
    }
    printf("%d\n", ans);
    return 0;
}
