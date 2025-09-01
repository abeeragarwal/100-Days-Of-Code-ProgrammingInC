// Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main(){
    float principal, rate, time, s_interest, c_interest;
    printf("Enter principal amount, rate and time: ");
    scanf("%f %f %f", &principal, &rate, &time);
    s_interest = (principal * rate * time) / 100;
    c_interest = principal * (pow((1 + rate / 100), time)) - principal;
    printf("Simple Interest=%.2f, Compound Interest=%.2f", s_interest, c_interest);
    return 0;
}