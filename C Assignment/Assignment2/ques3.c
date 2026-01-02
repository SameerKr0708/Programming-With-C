// Program to validate username and password using logical operators
#include <stdio.h>

int main() {
    int username, password;

    // Predefined username and password
    int correctUsername = 1111;
    int correctPassword = 1234;

    // Input from user
    printf("Enter username (number): ");
    scanf("%d", &username);

    printf("Enter password (number): ");
    scanf("%d", &password);

    // Checking using logical operators
    if (username == correctUsername && password == correctPassword) {
        printf("Login Successful.\n");
    } else {
        printf("Invalid Login.\n");
    }

    return 0;
}
