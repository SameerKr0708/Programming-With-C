#include <stdio.h>

int main(void) {
    float bal1, bal2;

    printf("Enter two account balances: ");
    scanf("%f %f", &bal1, &bal2);

    /* Use relational expressions which evaluate to 1 (true) or 0 (false) */
    int both_equal = (bal1 == bal2);
    int first_greater = (bal1 > bal2);
    int second_greater = (bal2 > bal1);

    printf("Both equal: %d\n", both_equal);
    printf("First greater: %d\n", first_greater);
    printf("Second greater: %d\n", second_greater);

    return 0;
}
