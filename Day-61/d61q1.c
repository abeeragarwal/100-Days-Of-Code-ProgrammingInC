// Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

#include <stdio.h>

int main(void) {
    int n, k; printf("Enter n and k: "); if (scanf("%d %d", &n, &k) != 2 || n <= 0 || k <= 0 || k > n) return 0;
    int a[200000]; if (n > 200000) n = 200000;
    printf("Enter %d integers: ", n); for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int q[200000]; int head = 0, tail = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) q[tail++] = i;
        while (head < tail && q[head] <= i - k) head++;
        if (i >= k - 1) {
            if (head < tail) printf("%d", a[q[head]]); else printf("0");
            if (i + 1 < n) printf(" ");
        }
    }
    printf("\n");
    return 0;
}
