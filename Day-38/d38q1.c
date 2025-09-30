// Add two matrices.
#include <stdio.h>
int main(){
    int m1[100][100], m2[100][100], msum[100][100], r1, r2, c1, c2;
    printf("Enter the number of rows and columns for matrix 1:\n");
    scanf("%d %d", &r1, &c1);
    printf("Enter the elements of matrix 1:\n");
    for(int i=0; i<r1; i++){
        for (int j=0; j<c1; j++){
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Enter the number of rows and columns for matrix 2:\n");
    scanf("%d %d", &r2, &c2);
    printf("Enter the elements of matrix 2:\n");
    for(int i=0; i<r2; i++){
        for (int j=0; j<c2; j++){
            scanf("%d", &m2[i][j]);
        }
    }
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            msum[i][j]=m1[i][j]+m2[i][j];
        }
    }
    printf("The matrix representing the sum of matrix 1 and matrix2 is:\n");
    for(int i=0; i<r2; i++){
        for (int j=0; j<c2; j++){
            printf("%d ", msum[i][j]);
        }
        printf("\n");
    }
    return 0;
}