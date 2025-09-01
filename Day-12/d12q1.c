// Write a program to calculate a library fine based on late days.
#include <stdio.h>
int main(){
    int day,fee;
    printf("Enter the number of days: ");
    scanf("%d", &day);
    if (day<=7){
        fee = day*2;
        printf("Fine ₹%d", &fee);
    }else if (day<=14){
        fee = day*4;
        printf("Fine ₹%d", &fee);
    }else if (day<=21){
        fee = day*6;
        printf("Fine ₹%d", &fee);
    }else if (day<=28){
        fee = day*8;
        printf("Fine ₹%d", &fee);
    }else{
        printf("Membership Cancelled.");
    }
    return 0;
}