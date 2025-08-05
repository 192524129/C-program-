#include <stdio.h>

int main() {
    int arr[100], n, i;
    int *ptr, max;

    // Input size of array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Pointer to the first element
    ptr = arr;
    max = *ptr;

    // Traverse the array using pointer to find max
    for(i = 1; i < n; i++) {
        if(*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }

    // Output the result
    printf("The maximum element in the array is: %d\n", max);

    return 0;
}