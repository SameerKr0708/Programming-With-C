// Program to simulate basic bank account operations
#include <stdio.h>

int main() {
    float balance, interest, maintenance, bonusFactor;

    printf("Enter initial account balance: ");
    scanf("%f", &balance);

    printf("Enter interest amount to add: ");
    scanf("%f", &interest);
    balance += interest;  
    printf("After adding interest: %.2f\n", balance);

    printf("Enter annual maintenance charge to deduct: ");
    scanf("%f", &maintenance);
    balance -= maintenance; 
    printf("After deducting maintenance: %.2f\n", balance);

    printf("Enter bonus factor to multiply (e.g., 1.05 for 5%% bonus): ");
    scanf("%f", &bonusFactor);
    balance *= bonusFactor;
    printf("After adding bonus: %.2f\n", balance);

    balance /= 2; 
    printf("After dividing among two accounts: %.2f\n", balance);

    return 0;
}