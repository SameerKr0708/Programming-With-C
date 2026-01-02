#include <stdio.h>

// swapping two numbers using call by reference

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Enter First Number: ");
    scanf("%d", &x);

    printf("Enter Second Numbers: ");
    scanf("%d", &y);

    printf("Before Swapping: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After Swapping: x = %d, y = %d\n", x, y);

    return 0;
}