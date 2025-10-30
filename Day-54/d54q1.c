// Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
//
// Follow-up 1 (optional): Can you do it in O(log n) Time Complexity? Follow-up 2 (optional): Can you do it in O(1) Time Complexity?

#include <stdio.h>
#include <math.h>

int main(void) {
    long long n; printf("Enter n: "); if (scanf("%lld", &n) != 1 || n <= 0) { printf("-1\n"); return 0; }
    long long t = n * (n + 1) / 2;
    long double root = sqrtl((long double)t);
    long long x = (long long)(root + 0.5L);
    if (x * x == t) printf("%lld\n", x); else printf("-1\n");
    return 0;
}
