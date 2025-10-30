// Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
//
// Follow-up(optional): Can you write a code that runs in O(n) time and without using the division operation.

#include <stdio.h>

int main(void) {
    int n; printf("Enter n: "); if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int a[100000]; if (n > 100000) n = 100000;
    printf("Enter %d integers: ", n); for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    long long out[100000];
    long long pref = 1; for (int i = 0; i < n; i++) { out[i] = pref; pref *= a[i]; }
    long long suff = 1; for (int i = n-1; i >= 0; i--) { out[i] *= suff; suff *= a[i]; }
    for (int i = 0; i < n; i++) { printf("%lld", out[i]); if (i+1<n) printf(" "); }
    printf("\n");
    return 0;
}
