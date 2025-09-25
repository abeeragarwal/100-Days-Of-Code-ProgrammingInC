// Find the sum of all elements in a matrix.
#include <stdio.h>
int main(){
    int m[10][10], r, c, sum=0;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter the matrix elements:\n");
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            scanf("%d", &m[i][j]);
            sum+=m[i][j];
        }
    }
    printf("%d", sum);
    return 0;   
}