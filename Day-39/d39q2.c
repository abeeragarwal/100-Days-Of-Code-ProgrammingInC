// Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>
int main(){
    int m[100][100], r, c, sum=0;
    printf("Enter the rows and columns:\n");
    scanf("%d %d", &r, &c);
    if (r != c) {
        printf("Error: Matrix is not square.\n");
        return 1;
    }
    printf("Enter the elements of the matrix:\n");
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            scanf("%d", &m[i][j]);
        }
    }

    for (int i=0; i<r; i++){
        sum+=m[i][i];
    }

    printf("Sum of main diagonal elements: %d\n", sum);
    return 0;
}