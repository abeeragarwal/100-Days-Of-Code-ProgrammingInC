// Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>
int main(){
    int n, arr1[100], arr2[100], res1=0, res2=0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array seperated by a space: ");
    for (int i=0; i<n; i++){
        scanf("%d", &arr1[i]);
    }
    for (int i=0; i<n+1; i++){
        arr2[i] = i;
    }
    for (int i=0; i<n; i++){
        res1 ^= arr1[i];
    }
    for (int i=0; i<n+1; i++){
        res2 ^= arr2[i];
    }
    printf("%d", res1^res2);
    return 0;
    
}