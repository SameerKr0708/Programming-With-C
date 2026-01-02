#include <stdio.h>

int main(void)
{
	int i = 10;
	float f = 3.14f;
	char c = 'A';
	double d = 6.28;

	printf("int:    value = %d, size = %zu bytes\n", i, sizeof(i));
	printf("float:  value = %f, size = %zu bytes\n", f, sizeof(f));
	printf("char:   value = %c, size = %zu bytes\n", c, sizeof(c));
	printf("double: value = %lf, size = %zu bytes\n", d, sizeof(d));

	return 0;
}

