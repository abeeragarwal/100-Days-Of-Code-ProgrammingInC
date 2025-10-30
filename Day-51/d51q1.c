// Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. 
// The elements in the sorted array might be repeated. You need to print the first and last occurrence of 
// the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
#include <stdio.h>

int find_first(int arr[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            result = mid;
            high = mid - 1; 
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int find_last(int arr[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            result = mid;
            low = mid + 1; 
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int sorted_array[100], n, target;
    printf("Enter the number of elements in the sorted array: ");
    if (scanf("%d", &n) != 1 || n < 0) return 0;
    printf("Enter the elements of the sorted array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &sorted_array[i]);
    }
    printf("Enter the target integer: ");
    if (scanf("%d", &target) != 1) return 0;

    int first = find_first(sorted_array, n, target);
    int last = find_last(sorted_array, n, target);

    if (first == -1) {
        printf("-1, -1\n");
    } else {
        printf("First occurrence: %d\n", first);
        printf("Last occurrence: %d\n", last);
    }
    return 0;
}