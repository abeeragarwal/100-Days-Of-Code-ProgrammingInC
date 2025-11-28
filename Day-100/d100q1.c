//Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>
struct Car{
    char model[50];
    int year;
    float price;
};
int main(){
    struct Car myCar;
    struct Car *carPtr = &myCar;
    
    printf("Enter car model: ");
    scanf("%s", carPtr->model);
    printf("Enter car year: ");
    scanf("%d", &carPtr->year);
    printf("Enter car price: ");
    scanf("%f", &carPtr->price);
    
    printf("\nCar Details:\n");
    printf("Model: %s\n", carPtr->model);
    printf("Year: %d\n", carPtr->year);
    printf("Price: %.2f\n", carPtr->price);
    
    return 0;
}