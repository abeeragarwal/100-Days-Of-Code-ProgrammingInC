// Write a program to check if a number is a perfect number.
#include <stdio.h>
int main(){
    int n, sum=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i=1; i<n; i++){
        if (n%i==0){
            sum+=i;
        }
    }
    if (sum==n){
        printf("Perfect Number");
        return 0;
    }else{
        printf("Not perfect number");
        return 0;
    }
}