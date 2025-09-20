// Reverse an array without taking extra space.
#include <stdio.h>
void reverseArray(int arr[], int n) {
    int start = 0, end = n - 1;
    while (start < end) {
        // Swap arr[start] and arr[end]
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: \n");
    printArray(arr, n);
    reverseArray(arr, n);
    printf("Reversed array: \n");
    printArray(arr, n);
    return 0;
}