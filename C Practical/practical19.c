// Program to calculate the total electricity units consumed in a week
#include <stdio.h>
int main(){
    int units;
    int total=0;
    
    
    for(int day=1; day<=7; day++){
        printf("Enter units consumed on day %d: ", day);
        scanf("%d", &units);
        total += units;
    }
    printf("Total Electricity Units consumed in a week: %d", total);

return 0;
}
