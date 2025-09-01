// Write a program to calculate an electricity bill based on units consumed.
#include <stdio.h>
int main(){
    int units,fee;
    printf("Enter the number of units: ");
    scanf("%d", &units);
    if (units<=100){
        fee = units*5;
        printf("Fine ₹%d", fee);
    }else if (units<=200){
        fee = (100*5)+(units-100)*9;
        printf("Fine ₹%d", fee);
    }else{
        fee = (100*5)+(100*9)+(units-200)*16;
        printf("Fine ₹%d", fee);
    }
    return 0;
}