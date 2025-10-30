// Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>

int main(void) {
    int n, k; printf("Enter n and k: "); if (scanf("%d %d", &n, &k) != 2 || n <= 0 || k <= 0 || k > n) { printf("0\n"); return 0; }
    int a[200000]; if (n > 200000) n = 200000;
    printf("Enter %d integers: ", n); for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    long long window = 0; for (int i = 0; i < k; i++) window += a[i];
    long long best = window;
    for (int i = k; i < n; i++) { window += a[i] - a[i-k]; if (window > best) best = window; }
    printf("%lld\n", best);
    return 0;
}
