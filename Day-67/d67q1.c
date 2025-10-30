// Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

#include <stdio.h>

int main(void) {
    int m, n; printf("Enter m and n: "); if (scanf("%d %d", &m, &n) != 2 || m < 0 || n < 0) return 0;
    int a[200000], b[200000]; if (m > 200000) m = 200000; if (n > 200000) n = 200000;
    printf("Enter %d sorted integers for first array: ", m); for (int i = 0; i < m; i++) scanf("%d", &a[i]);
    printf("Enter %d sorted integers for second array: ", n); for (int i = 0; i < n; i++) scanf("%d", &b[i]);
    int i = 0, j = 0; int first = 1;
    while (i < m && j < n) {
        int val; if (a[i] <= b[j]) { val = a[i++]; } else { val = b[j++]; }
        if (!first) {
            printf(" ");
        }
        printf("%d", val);
        first = 0;
    }
    while (i < m) {
        if (!first) {
            printf(" ");
        }
        printf("%d", a[i++]);
        first = 0;
    }
    while (j < n) {
        if (!first) {
            printf(" ");
        }
        printf("%d", b[j++]);
        first = 0;
    }
    printf("\n");
    return 0;
}
