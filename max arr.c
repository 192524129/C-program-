#include <stdio.h>

// Function to find maximum using pointer
int findMax(int *arr, int size) {
    int i, max = *arr;  // Assume first element is max

    for(i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);  // Update max if a larger element is found
        }
    }

    return max;
}

int main() {
    int arr[100], n, i, max;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call function to find max
    max = findMax(arr, n);

    // Print result
    printf("Maximum element in array = %d\n", max);

    return 0;
}