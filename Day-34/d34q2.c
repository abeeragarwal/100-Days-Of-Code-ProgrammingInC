// Delete an element from an array.
#include <stdio.h>
int main(){
    int n, key, arr[100], i, j, pos = -1;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to delete: ");
    scanf("%d", &key);
    // Find the position of the element to be deleted
    for(i = 0; i < n; i++){
        if(arr[i] == key){
            pos = i;
            break;
        }
    }
    if(pos == -1){
        printf("Element not found\n");
        return 1;
    }
    // Shift elements to the left to fill the gap
    for(j = pos; j < n - 1; j++){
        arr[j] = arr[j + 1];
    }
    n--; // Decrease the size of the array
    printf("Array after deletion: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}