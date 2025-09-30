// Check if a matrix is symmetric.
#include <stdio.h>
int main(){
    int m[100][100], r, c, flag=1;
    printf("Enter the number of rows and columns for the matrix:\n");
    scanf("%d %d", &r, &c);
    if(r != c){
        printf("The matrix is not symmetric.\n");
        return 0;
    }
    printf("Enter the elements of the matrix:\n");
    for(int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            scanf("%d", &m[i][j]);
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(m[i][j] != m[j][i]){
                flag = 0;
                break;
            }
        }
        if(flag == 0){
            break;
        }
    }
    if(flag){
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }
    return 0;
}