// Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

#include <stdio.h>

int main(void) {
    int n, k; printf("Enter n and k: "); if (scanf("%d %d", &n, &k) != 2 || n <= 0 || k <= 0 || k > n) return 0;
    int a[200000]; if (n > 200000) n = 200000;
    printf("Enter %d integers: ", n); for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int dqIdx[200000]; int head = 0, tail = 0;
    for (int i = 0; i < n; i++) {
        if (head < tail && dqIdx[head] <= i - k) head++;
        while (head < tail && a[dqIdx[tail-1]] <= a[i]) tail--;
        ;
        dqIdx[tail++] = i;
        if (i >= k - 1) {
            printf("%d", a[dqIdx[head]]);
            if (i + 1 < n) printf(" ");
        }
    }
    printf("\n");
    return 0;
}
