#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float a, b;

    printf("< + - x 'Multi-Functional Calculator' x ÷ = >\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square Root\n");
    printf("6. Power\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result = %.2f", a + b);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result = %.2f", a - b);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result = %.2f", a * b);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            if (b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Division by zero not allowed");
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%f", &a);
            printf("Square Root = %.2f", sqrt(a));
            break;

        case 6:
            printf("Enter base and power: ");
            scanf("%f %f", &a, &b);
            printf("Result = %.2f", pow(a, b));
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
