#include <stdio.h>

// Function to count odd and even numbers using pointer
void countOddEven(int *arr, int size, int *odd, int *even) {
    int i;

    *odd = 0;
    *even = 0;

    for (i = 0; i < size; i++) {
        if (*(arr + i) % 2 == 0)
            (*even)++;
        else
            (*odd)++;
    }
}

int main() {
    int arr[100], n, i;
    int oddCount, evenCount;

    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call function to count odd and even
    countOddEven(arr, n, &oddCount, &evenCount);

    // Display results
    printf("Number of even elements: %d\n", evenCount);
    printf("Number of odd elements : %d\n", oddCount);

    return 0;
}