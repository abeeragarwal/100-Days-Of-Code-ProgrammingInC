// Write a program to print the following pattern:
/*
*

*
*
*

*
*
*
*
*

*
*
*

*
*/
#include <stdio.h>
int main()
{
    int groups[] = {1, 3, 5, 3, 1};
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < groups[i]; j++)
        {
            printf("*\n");
        }
        if (i != 4)
            printf("\n");
    }
    return 0;
}