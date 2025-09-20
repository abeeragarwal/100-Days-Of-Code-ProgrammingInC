// Count positive, negative, and zero elements in an array.
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, cp = 0, cn = 0, co = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *arr = (int*) malloc(n*sizeof(int));
    if (arr == NULL){
        printf("Memory Allocation Failed.\n");
        return 1;
    }
    printf("Enter the numbers: ");
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<n; i++){
        if(arr[i]>0){cp++;}else if(arr[i]==0){co++;}else{cn++;}
    }
    printf("Positive=%d, Negative=%d, Zero=%d", cp, cn, co);
    return 0;
}