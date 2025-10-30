// Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b){
    int x = *(const int*)a, y = *(const int*)b;
    if (x < y) {
        return -1;
    }
    if (x > y) {
        return 1;
    }
    return 0;
}

int main(void) {
    int n, k; printf("Enter n and k: "); if (scanf("%d %d", &n, &k) != 2 || n <= 0 || k <= 0 || k > n) return 0;
    int a[200000]; if (n > 200000) n = 200000;
    printf("Enter %d integers: ", n); for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    qsort(a, n, sizeof(int), cmp);
    printf("%d\n", a[k-1]);
    return 0;
}
