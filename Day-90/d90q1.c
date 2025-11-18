//Define a struct with enum Gender and print person's gender.
/*
INPUT = Gender=MALE
OUTPUT = Male
*/
#include <stdio.h>
#include <string.h>

enum Gender {MALE, FEMALE, OTHER};
struct Person {
    enum Gender gender;
};
int main() {
    struct Person person;
    char genderInput[10];
    printf("Enter gender (MALE, FEMALE, OTHER): ");
    scanf("%s", genderInput);
    
    if (strcmp(genderInput, "MALE") == 0) {
        person.gender = MALE;
    } else if (strcmp(genderInput, "FEMALE") == 0) {
        person.gender = FEMALE;
    } else if (strcmp(genderInput, "OTHER") == 0) {
        person.gender = OTHER;
    } else {
        printf("Invalid gender\n");
        return 1;
    }
    
    switch (person.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;  
    }
    return 0;
}