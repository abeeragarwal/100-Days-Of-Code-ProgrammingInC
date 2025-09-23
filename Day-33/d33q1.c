//  Search in a sorted array using binary search.
#include <stdio.h>
int main(){
    int n, key, arr[100], i, beg, end, mid;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements in sorted order: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &key);
    beg = 0;
    end = n - 1;
    mid = (beg + end) / 2;
    while(beg <= end){
        if(arr[mid] == key){
            printf("Element found at position %d\n", mid + 1);
            break;
        }
        else if(arr[mid] < key){
            beg = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = (beg + end) / 2;
    }
    if(beg > end){
        printf("Element not found\n");
    }
    return 0;
}