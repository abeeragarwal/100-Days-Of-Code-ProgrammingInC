// Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>
enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};
int main(){
    enum Status myVar;

    char input[20];
    printf("Enter the status code (SUCCESS/FAILURE/TIMEOUT): ");
    fgets(input, sizeof(input), stdin);
    
    if (input[0] == 'S') {
        myVar = SUCCESS;
        printf("Operation successful\n");
    } else if (input[0] == 'F') {
        myVar = FAILURE;
        printf("Operation failed\n");
    } else if (input[0] == 'T') {
        myVar = TIMEOUT;
        printf("Operation time out\n");
    }
    
    return 0;
}