// Program to check if a given year is a leap year
#include <stdio.h>
    int main() {
       
        int year;
       printf("Enter a year:");
       scanf("%d" ,&year);
       
       if(year %4 == 0 && year %100 != 0) {
        printf("The year is leap year\n");
       }
        else if(year %400 == 0) {
             printf("The is a leap year\n");
        }
        else {
             printf("The given year is not a leap year");
        }
           printf("The given year is %d leap year\n", year);
        
        
       return 0;
        
      
    }