// Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

#include <stdio.h>

int main(void) {
    int n; printf("Enter n: "); if (scanf("%d", &n) != 1 || n <= 0) return 0;
    long long a[200000]; if (n > 200000) n = 200000;
    printf("Enter %d integers: ", n); for (int i = 0; i < n; i++) scanf("%lld", &a[i]);
    long long best = a[0], cur = a[0];
    for (int i = 1; i < n; i++) {
        if (cur < 0) cur = a[i]; else cur += a[i];
        if (cur > best) best = cur;
        if (a[i] > best && cur < a[i]) best = a[i];
    }
    printf("%lld\n", best);
    return 0;
}
