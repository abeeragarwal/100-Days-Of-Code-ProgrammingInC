// Perform diagonal traversal of a matrix.
#include <stdio.h>
int main(){
    int m[100][100], r, c;
    printf("Enter the rows and columns:\n");
    scanf("%d %d", &r, &c);
    printf("Enter the elements of the matrix:\n");
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            scanf("%d", &m[i][j]);
        }
    }

    printf("Diagonal traversal of the matrix:\n");
    for (int d = 0; d < r + c - 1; d++) {
        int row, col;
        if (d % 2 == 0) {
            // Even diagonals: go up
            row = (d < r) ? d : r - 1;
            col = d - row;
            while (row >= 0 && col < c) {
                printf("%d ", m[row][col]);
                row--;
                col++;
            }
        } else {
            // Odd diagonals: go down
            col = (d < c) ? d : c - 1;
            row = d - col;
            while (col >= 0 && row < r) {
                printf("%d ", m[row][col]);
                row++;
                col--;
            }
        }
    }
    return 0;
}