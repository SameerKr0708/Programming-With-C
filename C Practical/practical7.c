// 2. Problem Statement: Comparing Two Numbers Without Conditional Statements
// A bank’s client tool needs to find out which of two account balances is higher, but the program cannot use any conditional statements (like if, else, or ternary operators).
// Write a C program that:
// - Takes two account balances as input (float).
// - Uses relational and logical operators to determine:
//   o Whether both balances are equal.
//   o Whether the first balance is greater than the second.
//   o Whether the second balance is greater than the first.
// - Displays the results as 1 (true) or 0 (false) for each condition.


#include <stdio.h>

int main() {
    float balance1, balance2;

  
    printf("Enter first balance: ");
    scanf("%f", &balance1);
    printf("Enter second balance: ");
    scanf("%f", &balance2);

 
    int equal = (balance1 == balance2);
    int firstGreater = (balance1 > balance2);
    int secondGreater = (balance2 > balance1);


    printf("\nAre both balances equal? %d\n", equal);
    printf("Is first balance greater than second? %d\n", firstGreater);
    printf("Is second balance greater than first? %d\n", secondGreater);

    return 0;
}
