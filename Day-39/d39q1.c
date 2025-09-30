//  Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
#include <stdbool.h>
#define MAX 10
bool checkDistinct(int arr[MAX][MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i][i] == arr[j][j])
                return false;
        }
    }
    return true;
}
int main()
{
    int arr[MAX][MAX], n;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    if (checkDistinct(arr, n))
        printf("The elements on the diagonal are distinct.\n");
    else
        printf("The elements on the diagonal are not distinct.\n");
    return 0;
}