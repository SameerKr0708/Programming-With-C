#include <stdio.h>

int main() {
    int arr[5];
    int i;

    // taking input from the user
    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    // printing the elements of the array
    printf("The elements in the array are:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
