#include <stdio.h>

// findinf the maximum of two integers using a function //

int max_of_two(int *a, int *b)
{
	return (*a > *b) ? *a : *b;
}

int main(void)
{
	int x, y;
	printf("Enter two Integers: ");
	if (scanf("%d %d", &x, &y) != 2) {
		fprintf(stderr, "Invalid input\n");
		return 1;
	}

	int maximum = max_of_two(&x, &y);
	printf("Maximum of two Integers is: %d\n", maximum);
	return 0;
}

