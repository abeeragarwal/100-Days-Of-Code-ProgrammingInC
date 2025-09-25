// Read and print a matrix.
#include <stdio.h>
int main(){
    int m[10][10], r, c;
    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);
    printf("Enter matrix elements:\n");
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            scanf("%d", &m[i][j]);
    printf("Matrix is:\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
    return 0;
}