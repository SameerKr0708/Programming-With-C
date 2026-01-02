// Program to perform basic arithmetic operations
#include <stdio.h>                          
int main() {
    int a, b;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Perform operations
    printf("\nResults:\n");
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);

    if (b != 0) {
        printf("Division: %d / %d = %d\n", a, b, a / b);
        printf("Modulus: %d %% %d = %d\n", a, b, a % b);
    } else {
        printf("Division: Not possible (division by zero)\n");
        printf("Modulus: Not possible (division by zero)\n");
    }
    return 0;
}
