// Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.
//
// N.B:
// - Print the output for each element in a comma separated fashion.
// - Do not use Stack, use brute force approach (nested loop) to solve.
// Try solving this using brute force (nested loop). No need of attempting the optimized stack-based solution.

#include <stdio.h>

int main(void) {
    int n; printf("Enter n: "); if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int a[100000]; if (n > 100000) n = 100000;
    printf("Enter %d integers: ", n); for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) {
        int prev = -1;
        for (int j = i - 1; j >= 0; j--) { if (a[j] > a[i]) { prev = a[j]; break; } }
        printf("%d", prev); if (i + 1 < n) printf(", ");
    }
    printf("\n");
    return 0;
}
