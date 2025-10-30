/*
Write a Program to take a sorted array arr[] and an integer x as input, 
find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. 
This element is called the ceil of x. If such an element does not exist, print -1. 
Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
*/
#include <stdio.h>
int findCeilIndex(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    int ceilIndex = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] >= x) {
            ceilIndex = mid; // Potential ceil found
            right = mid - 1; // Look for a smaller index
        } else {
            left = mid + 1; // Move to the right half
        }
    }

    return ceilIndex;
}
int main() {
    int n, x;

    // Input size of array
    printf("Enter the size of the sorted array: ");
    scanf("%d", &n);

    int arr[n];

    // Input sorted array elements
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the integer x
    printf("Enter the integer x: ");
    scanf("%d", &x);

    // Find and print the index of the ceil of x
    int index = findCeilIndex(arr, n, x);
    printf("Index of the ceil of %d: %d\n", x, index);

    return 0;
}