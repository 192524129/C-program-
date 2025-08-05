#include <stdio.h>

// Function to sort array in descending order using pointers
void sortDescending(int *arr, int n) {
    int i, j, temp;

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(*(arr + j) < *(arr + j + 1)) {
                // Swap elements
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arr[100], n, i;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array in reverse order
    sortDescending(arr, n);

    // Output sorted array
    printf("Array sorted in descending order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }

    return 0;
}