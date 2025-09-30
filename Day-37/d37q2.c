// Find the transpose of a matrix.
#include <stdio.h>
int main(){
    int m[100][100], t[100][100], r, c;
    printf("Enter the rows and columns:\n");
    scanf("%d %d", &r, &c);
    printf("Enter the matrix elements:\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &m[i][j]);
        }
    }
    printf("\n");
    for(int j=0; j<c; j++){
        for(int i=0; i<r; i++){
            t[j][i] = m[i][j];
            printf("%d ", t[j][i]);
        }
        printf("\n");
    }
    return 0;
}