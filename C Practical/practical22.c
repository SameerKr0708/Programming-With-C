// Program to calculate the total number of days a student was present in a month
#include <stdio.h>
int main(){
    int days;
    int total=0;
    
    
    for(int day=1; day<=30; day++){
        printf("Day %d(1=Present, 0=Absent): ", day);
        scanf("%d", &days);
        total += days;
    }
    printf("Total Present Days: %d", total);

return 0;
}
