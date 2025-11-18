// Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>
enum UserRole {
    ADMIN,
    USER,
    GUEST
};
void displayMessage(enum UserRole role) {
    switch (role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! You have minimal access.\n");
            break;
        default:
            printf("Unknown role!\n");
    }
}
int main() {
    enum UserRole role1 = ADMIN;
    enum UserRole role2 = USER;
    enum UserRole role3 = GUEST;
    displayMessage(role1);
    displayMessage(role2);
    displayMessage(role3);
    return 0;
}