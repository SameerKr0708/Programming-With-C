#include <stdio.h>

int main(void) {
	int a, b;

	printf("Enter two integers: ");
	if (scanf("%d %d", &a, &b) != 2) {
		printf("Invalid input.\n");
		return 1;
	}

	printf("Addition: %d + %d = %d\n", a, b, a + b);
	printf("Subtraction: %d - %d = %d\n", a, b, a - b);
	printf("Multiplication: %d * %d = %d\n", a, b, a * b);

	if (b != 0) {
		printf("Integer Division: %d / %d = %d\n", a, b, a / b);
		printf("Floating Division: %d / %d = %.6f\n", a, b, (double)a / b);
		printf("Modulus: %d %% %d = %d\n", a, b, a % b);
	} else {
		printf("Division: Cannot divide by zero.\n");
		printf("Modulus: Cannot perform modulus by zero.\n");
	}

	return 0;
}

