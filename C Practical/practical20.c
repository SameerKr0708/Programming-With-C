// Program to count number of employees aged 30 or above
#include <stdio.h>
int main(){
    int age;
    int Employee;
    int count = 0;
   
    for(int Employee=1; Employee<=10; Employee++){
        printf("\nEnter age of Employee %d: ", Employee);
        scanf("%d", &age);
        if(age>=30){
            count++;
        }
    }
    printf("Employees aged 30 or above are: %d\n", count);

    return 0;   
}
