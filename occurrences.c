#include <stdio.h>

// Recursive function to count occurrences
int countOccurrences(int arr[], int size, int key) {
    if (size == 0)
        return 0;

    if (arr[size - 1] == key)
        return 1 + countOccurrences(arr, size - 1, key);
    else
        return countOccurrences(arr, size - 1, key);
}

int main() {
    int arr[100], n, key, i;

    // Input array size and elements
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to count
    printf("Enter the number to count occurrences of: ");
    scanf("%d", &key);

    // Call recursive function
    int count = countOccurrences(arr, n, key);

    // Display result
    printf("Number of occurrences of %d: %d\n", key, count);

    return 0;
}