// Program to simulate traffic light signals using switch case
#include <stdio.h>
int main(){
    printf("Press 1 for Red\n Press 2 for Yellow\n Press 3 for Green\n");
    char color;

    printf("Enter the Color:");
    scanf ("%c",&color);
    switch(color){
        case '1':
        printf("STOP\n");
        break;
      
        case '2':
        printf("READY\n");
        break;

        case '3':
        printf("GO\n");
        break;
}
    return 0;
}