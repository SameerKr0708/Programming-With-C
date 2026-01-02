// Program to check if a number is even or odd
#include <stdio.h>
int main() {
   int num1;
 printf("enter any number: \n");
 scanf("%d",&num1);
 if (num1%2==0) {
    printf(" This is an even number" );
    return 0;
 }
else{
   printf("%d This is an odd number ");
    return 0;
}
printf(" The input is %d\n ,num1");
   return 0;
}