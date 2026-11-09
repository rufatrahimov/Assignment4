#include <stdio.h>

// Function to rearrange the array so every 4 is followed by 9
void order49(int arr[], int len) {

    int i, j, temp;

    // Go through the array and find every 4
    for (i = 0; i < len; i++) {

        if (arr[i] == 4) {

            // Check the next position
            if (arr[i + 1] != 9) {

                // Find a 9 somewhere later in the array
                for (j = 0; j < len; j++) {

                    if (arr[j] == 9) {

                        // Swap 9 with the number after 4
                        temp = arr[i + 1];
                        arr[i + 1] = arr[j];
                        arr[j] = temp;

                        break; // Stop searching after finding 9
                    }
                }
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int len) {
    int i;

    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main() {

    int arr[] = {1, 4, 1, 9};
    int len = 4;

    // Print the original array
    printf("Original array: ");
    printArray(arr, len);

    // Call the order49 function
    order49(arr, len);

    // Print the modified array
    printf("Modified array: ");
    printArray(arr, len);

    return 0;
}