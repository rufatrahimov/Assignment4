#include <stdio.h>
#include <stdbool.h>

// Function to check whether a number is a power of 2
bool isPowerOfTwo(int x) {

    // Powers of 2 must be positive
    if (x <= 0) {
        return false;
    }

    // Check whether x is a power of 2 using bitwise AND
    if ((x & (x - 1)) == 0) {
        return true;  // Return TRUE
    }
    else {
        return false; // Return FALSE
    }
}

int main() {
    int x;

    // Ask the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &x);

    // Call the function and display the result
    if (isPowerOfTwo(x)) {
        printf("TRUE - The number is a power of 2.\n");
    }
    else {
        printf("FALSE - The number is not a power of 2.\n");
    }

    return 0; // End the program
}