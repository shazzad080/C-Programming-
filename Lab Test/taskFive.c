#include <stdio.h>

int main() {
    // Declare an integer array of size 5
    int myArray[5];

    // Initialize the array elements
    myArray[0] = 10;
    myArray[1] = 20;
    myArray[2] = 30;
    myArray[3] = 40;
    myArray[4] = 50;

    // Print the array elements
    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    return 0;
}
