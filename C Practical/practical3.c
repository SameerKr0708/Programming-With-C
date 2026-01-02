//Code to find the size of different data types in C
#include <stdio.h>

int main() {
    // Declare variables
    int num = 25;
    float decimal = 5.5;
    char letter = 'A';
    double big_decimal = 99.99;
    
    // Print values
    printf("Integer value: %d\n", num);
    printf("Float value: %f\n", decimal);
    printf("Character value: %c\n", letter);
    printf("Double value: %lf\n", big_decimal);
    
    // Print sizes
    printf("\nSize of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of double: %lu bytes\n", sizeof(double));
    
    return 0;
}   