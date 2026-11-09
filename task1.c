#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is even
bool isEven(int x) {

    // Check if the number is divisible by 2
    if (x % 2 == 0) {
        return true;  // Return TRUE if the number is even
    }
    else {
        return false; // Return FALSE if the number is odd
    }
}

int main() {
    int x;

    // Ask the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &x);

    // Call the isEven function and display the result
    if (isEven(x)) {
        printf("TRUE\n");
    }
    else {
        printf("FALSE\n");
    }

    return 0; // End the program
}