// Program to calculate electricity bill based on units consumed
#include <stdio.h>

int main() {
    int units;
    float rate, bill, finalBill;

    // Input units consumed
    printf("Enter units consumed: ");
    scanf("%d", &units);

    // Determine rate based on units
    if (units <= 100) {
        rate = 3.0;
    }
    else if (units <= 200) {
        rate = 4.0;
    }
    else {
        rate = 5.0;
    }

    // Calculate the bill
    bill = units * rate;

    // Apply 10% surcharge if bill exceeds 1000
    if (bill > 1000) {
        finalBill = bill + (bill * 0.10);  // 10% extra
    } else {
        finalBill = bill;
    }

    // Display final bill
    printf("Total Electricity Bill: Rs %.2f\n", finalBill);

    return 0;
}
