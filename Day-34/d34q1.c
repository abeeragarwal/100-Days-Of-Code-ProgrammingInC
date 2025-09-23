// Insert an element in an array at a given position.
#include <stdio.h>
int main(){
    int n, key, arr[100], i, j, pos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the position and element to insert (position element): ");
    scanf("%d %d", &pos, &key);
    if(pos < 1 || pos > n + 1){
        printf("Invalid position\n");
        return 1;
    }
    // Shift elements to the right to make space for the new element
    for(j = n; j >= pos; j--){
        arr[j] = arr[j - 1];
    }
    // Insert the new element
    arr[pos - 1] = key;
    n++; // Increase the size of the array
    printf("Array after insertion: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}