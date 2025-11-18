// Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
/*
Input 1:
ADD 10 20
Output 1:
30
*/
#include <stdio.h>
enum MenuOptions { ADD, SUBTRACT, MULTIPLY };
int main(){
    enum MenuOptions choice;
    int a, b;
    printf("Enter operation (0 for ADD, 1 for SUBTRACT, 2 for MULTIPLY) followed by two integers: ");
    scanf("%d %d %d", (int*)&choice, &a, &b);
    switch(choice){
        case ADD:
            printf("Result: %d\n", a + b);
            break;
        case SUBTRACT:
            printf("Result: %d\n", a - b);
            break;
        case MULTIPLY:
            printf("Result: %d\n", a * b);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}