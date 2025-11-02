#include <stdio.h>

int main() {
    
    int arr[] = {1, 8, 3, 5, 2, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i; 

    printf("Array: {");
    for (i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i == n - 1) ? "" : ", ");
    }
    printf("}\n");
    printf("Searching for a peak element...\n");

    if (n == 1) {
        printf("\nPeak element found at index 0: %d\n", arr[0]);
        return 0; 
    }

    if (arr[0] >= arr[1]) {
        printf("\nPeak element found at index 0: %d\n", arr[0]);
        return 0;
    }

    for (i = 1; i < n - 1; i++) {

        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            printf("\nPeak element found at index %d: %d\n", i, arr[i]);
            return 0; 
        }
    }

    if (arr[n - 1] >= arr[n - 2]) {
        printf("\nPeak element found at index %d: %d\n", n - 1, arr[n - 1]);
        return 0; 
    }

    printf("\nCould not find a peak element (this is unexpected).\n");

    return 0;
}
