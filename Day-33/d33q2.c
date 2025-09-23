// Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
int main(){
    int n, key, arr[100], i, j, pos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements in sorted order: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be inserted: ");
    scanf("%d", &key);
    // Find the position to insert the new element
    pos = 0;
    while(pos < n && arr[pos] < key){
        pos++;
    }
    // Shift elements to the right to make space for the new element
    for(j = n; j > pos; j--){
        arr[j] = arr[j - 1];
    }
    // Insert the new element
    arr[pos] = key;
    n++; // Increase the size of the array
    printf("Array after insertion: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}