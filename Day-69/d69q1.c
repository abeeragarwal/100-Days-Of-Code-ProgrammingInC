//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>
int main(){
    int n, arr[50];
    printf("Enter the size of array (max 50): ");
    scanf("%d", &n);
    if (n > 50 || n < 2) {
        printf("Invalid array size. Please enter a value between 2 and 50.\n");
        return 1;
    }
    printf("Enter elements of the array: ");
    int xor_result = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        xor_result ^= arr[i];
    }
    // XOR all expected indices (0 to n-2)
    for (int i = 0; i < n - 1; i++) {
        xor_result ^= i;
    }
    printf("Repeated element: %d\n", xor_result);
    return 0;
}