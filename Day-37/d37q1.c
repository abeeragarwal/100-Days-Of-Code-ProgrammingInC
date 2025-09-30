// Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main(){
    int m[100][100], r, c, sum[100];
    printf("Enter the rows and columns:\n");
    scanf("%d %d", &r, &c);
    printf("Enter the elements of the matrix:\n");
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            scanf("%d", &m[i][j]);
        }
    }

    for (int i=0; i<r; i++){
        int tempsum=0;
        for (int j=0; j<c; j++){
            tempsum+=m[i][j];
        }
        sum[i]=tempsum;
    }

    for (int i=0; i<r; i++){
        printf("%d ", sum[i]);
    }
    return 0;
}