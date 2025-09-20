// Count even and odd numbers in an array.
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, countE = 0, countO = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *arr = (int*) malloc(n*sizeof(int));
    if(arr==NULL){
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter the %d numbers: ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]); // Read each number into arr
    }
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){countE++;}else{countO++;}
    }
    printf("Even=%d, Odd=%d", countE, countO);
    free(arr); // Free the allocated memory
    return 0;
}