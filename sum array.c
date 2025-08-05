#include <stdio.h>

// Function to calculate sum of array elements using pointer
int sumArray(int *arr, int size) {
    int sum = 0, i;

    for(i = 0; i < size; i++) {
        sum += *(arr + i);  // Access array element using pointer
    }

    return sum;
}

int main() {
    int arr[100], n, i, result;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call function and pass array using pointer
    result = sumArray(arr, n);

    // Display result
    printf("Sum of array elements = %d\n", result);

    return 0;
}