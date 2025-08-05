#include <stdio.h>

int main() {
    int arr[100], n, i;
    int *ptr;
    int odd = 0, even = 0;

    // Input size of array
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Pointer to the start of array
    ptr = arr;

    // Count odd and even numbers using pointer
    for(i = 0; i < n; i++) {
        if (*(ptr + i) % 2 == 0)
            even++;
        else
            odd++;
    }

    // Output result
    printf("Number of even elements: %d\n", even);
    printf("Number of odd elements: %d\n", odd);

    return 0;
}