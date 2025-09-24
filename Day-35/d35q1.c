// Find the second largest element in an array.
#include <stdio.h>
int main(){
    int n, largest, second_largest;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[100]; // Assuming a maximum size of 100
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++){
        if(i == 0){
            largest = arr[i];
            second_largest = -1; // Initialize to -1 or any sentinel value
        } else {
            if(arr[i] > largest){
                second_largest = largest;
                largest = arr[i];
            } else if(arr[i] < largest && (second_largest == -1 || arr[i] > second_largest)){
                second_largest = arr[i];
            }
        }
    }
    if(second_largest == -1){
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest element is: %d\n", second_largest);
    }
    return 0;
}