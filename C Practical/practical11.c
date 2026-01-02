// Program to find the largest of three numbers using logical operators
#include <stdio.h>
    int main () {
         int a = 12;
          int b = 25;
           int c = 9;
    int answer;
    if (a > b  &&  a > c)
        answer = a;
    else if( b > c)
          answer = b;
    else
          answer = c;
  printf("largest no out of 3 no' is  %d\n" ,answer);
    return 0 ;
    }
    