#include <stdio.h>

// Function to move all zeros to the beginning of the array
void zeroComesFirst(int arr[], int len) {

    int i, j = 0;
    int temp;

    // Check whether the array contains any zeros
    for (i = 0; i < len; i++) {
        if (arr[i] == 0) {
            break;
        }
    }

    // If there are no zeros, do not change the array
    if (i == len) {
        return;
    }

    // Move all zeros to the beginning
    for (i = 0; i < len; i++) {

        // If the current element is zero
        if (arr[i] == 0) {

            // Swap it with the element at position j
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            // Move to the next position
            j++;
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

    int arr[] = {1, 0, 0, 1};
    int len = 4;

    // Print the original array
    printf("Original array: ");
    printArray(arr, len);

    // Call the function
    zeroComesFirst(arr, len);

    // Print the modified array
    printf("Modified array: ");
    printArray(arr, len);

    return 0;
}