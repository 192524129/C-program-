#include <stdio.h>

// Function to find the minimum element in an array
int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr[100], n, min;

    // Input number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function
    min = findMin(arr, n);

    // Display the result
    printf("The minimum element in the array is: %d\n", min);

    return 0;
}