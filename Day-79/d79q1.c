// A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include <stdio.h>
int main() {
    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int number;
    int sum = 0;
    int count = 0;

    while (fscanf(file, "%d", &number) == 1) {
        sum += number;
        count++;
    }

    fclose(file);

    if (count == 0) {
        printf("No numbers found in the file.\n");
        return 1;
    }

    double average = (double)sum / count;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}