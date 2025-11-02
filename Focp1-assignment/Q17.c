#include <stdio.h>

int main() {

    int arr[100] = {10, 20, 30, 40, 50, 60, 70, 80};
    int n = 8; 
    int position;
    int index_to_delete;
    int i;

    printf("--- Array Deletion Program ---\n");
    printf("Initial Array (Size: %d): [", n);
    for (i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i == n - 1) ? "" : ", ");
    }
    printf("]\n");

    printf("\nChoose a position to delete (1-based index, from 1 to %d):\n", n);
    printf("1. Front (Position 1)\n");
    printf("%d. End (Position %d)\n", n, n);
    printf("Enter position: ");
    
    if (scanf("%d", &position) != 1) {
        printf("\nError: Invalid input.\n");
        return 1;
    }

    if (position < 1 || position > n) {
        printf("\nError: Invalid position (%d). Must be between 1 and %d.\n", position, n);
    } else {
        index_to_delete = position - 1;
        
        if (index_to_delete == n - 1) {
            printf("\nDeletion performed at the END (index %d).\n", index_to_delete);
        }
        else {
            if (index_to_delete == 0) {
                 printf("\nDeletion performed at the FRONT (index 0).\n");
            } else {
                printf("\nDeletion performed in the MIDDLE (index %d).\n", index_to_delete);
            }

            for (i = index_to_delete; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
        }

        n--;

        printf("Array after deletion (New Size: %d): [", n);
        for (i = 0; i < n; i++) {
            printf("%d%s", arr[i], (i == n - 1) ? "" : ", ");
        }
        printf("]\n");
    }

    return 0;
}
