// swap two number
#include <stdio.h>

int main(void) {
   int a, b, temp;
   printf("enter first number: ");
   if (scanf("%d", &a) != 1) return 1;
   printf("enter second number: ");
   if (scanf("%d", &b) != 1) return 1;

   printf("\nbefore swapping: a = %d, b = %d\n", a, b);
   temp = a;
   a = b;
   b = temp;
   printf("after swapping: a = %d, b = %d\n", a, b);
   return 0;
}