#include <stdio.h>

// Function to find maximum in array
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

// Function to find minimum in array
int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main() {
    int arr[100], n;

    // Input size of array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call functions
    int max = findMax(arr, n);
    int min = findMin(arr, n);

    // Display results
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}