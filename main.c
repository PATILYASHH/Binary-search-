#include <stdio.h>

int binary_search(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1; // Target not found
}

int main() {
    int arr[100]; // Assuming maximum array size is 100
    int n, target;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array in sorted order: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target value to search for: ");
    scanf("%d", &target);

    int result = binary_search(arr, n, target);
    if (result != -1) {
        printf("Element %d is present at index %d.\n", target, result);
    } else {
        printf("Element %d is not present in the array.\n", target);
    }

    return 0;
}