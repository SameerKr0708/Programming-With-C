// Program to calculate the total distance walked in a month
#include <stdio.h>
int main(){
    int kilometers;
    int total=0;
    
    
    for(int day=1; day<=30; day++){
        printf("Enter Distance Walked on Day %d(Km): ", day);
        scanf("%d", &kilometers);
        total += kilometers;
    }
    printf("Total Distance Walked: %d Km", total);

return 0;
}