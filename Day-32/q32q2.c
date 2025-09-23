// Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main(){
    int num, count[10] = {0}, maxCount = 0, digit, i;
    printf("Enter an integer number: ");
    scanf("%d", &num);
    if(num < 0) num = -num; // Handle negative numbers
    while(num > 0){
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }
    for(i = 0; i < 10; i++){
        if(count[i] > maxCount){
            maxCount = count[i];
            digit = i;
        }
    }
    printf("Digit that occurs the most: %d (occurs %d times)\n", digit, maxCount);
    return 0;
}