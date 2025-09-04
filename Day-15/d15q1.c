// Write a program to calculate the factorial of a number
#include <stdio.h>
int main(){
    int n, res=1;
    printf("Enter a number n: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        res*=i;
    }
    printf("%d", res);
    return 0;
}