#include <stdio.h>

// Function to calculate the sum of array elements
int sumOfArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[100], n, sum;

    // Input number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function
    sum = sumOfArray(arr, n);

    // Display the result
    printf("The sum of the array elements is: %d\n", sum);

    return 0;
}