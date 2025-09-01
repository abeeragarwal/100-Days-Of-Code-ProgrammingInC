// Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main(){
    float cp, sp;
    printf("Enter the Cost Price and Selling Price (separated by space): ");
    scanf("%f %f", &cp, &sp);
    if (cp < sp) {
        int p = sp-cp;
        float pp = ((float)p * 100) / cp;
        printf("Profit %.2f%%", pp);
    } else if (cp > sp) {
        int l = cp-sp;
        float lp = ((float)l * 100) / cp;
        printf("Loss %.2f%%", lp);
    } else {
        printf("No Profit No Loss");
    }
    return 0;
}