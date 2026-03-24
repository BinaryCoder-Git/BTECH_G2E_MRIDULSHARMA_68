#include <stdio.h>

int main() {
    int arr[100], n, i, max;

    // 1. Get the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // 2. Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
        }
    }

    printf("The maximum element in the array is: %d\n", max);

    return 0;
}
