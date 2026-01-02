// Program to calculate the total price of 5 items entered by the user
#include <stdio.h>
int main(){
 int item;
 float total;
 float price;
    printf("Enter item numbers : ");
    scanf("%d", &item);

    for(int a=1; a<=5; a++){
        printf("\nEnter Price of Item no' %d: ", a);
        scanf("%f", &price);
        total += price;
    }
   
    printf("Total Price of all the items: %.2f\n", total);
    
    return 0;

}