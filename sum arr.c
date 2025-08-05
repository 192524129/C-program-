#include <stdio.h>

// Recursive function to calculate sum of array elements
int sumArray(int arr[], int size) {
    if (size == 0)
        return 0;  // Base case: empty array
    else
        return arr[size - 1] + sumArray(arr, size - 1);
}

int main() {
    int arr[100], n, i;

    // Input array size and elements
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the recursive function
    int total = sumArray(arr, n);

    // Display the result
    printf("Sum of array elements: %d\n", total);

    return 0;
}