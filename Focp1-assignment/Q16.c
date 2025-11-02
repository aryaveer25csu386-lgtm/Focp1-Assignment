#include <stdio.h>

int main() {

    const int MAX_SIZE = 10;
    int arr[MAX_SIZE];
    int current_size = 5; 
    int i; 
    int element, choice, insertion_index = -1;

    for (i = 0; i < current_size; i++) {
        arr[i] = (i + 1) * 10;
    }

    printf("--- Array Insertion ---\n");
    printf("Initial Array (%d elements):\n[ ", current_size);
    for (i = 0; i < current_size; i++) {

        printf("%d%s", arr[i], (i < current_size - 1) ? ", " : "");
    }
    printf(" ]\n\n");

    if (current_size >= MAX_SIZE) {
        printf("Error: Array is full.\n");
        return 1;
    }

    printf("Enter value to insert: ");
    if (scanf("%d", &element) != 1) return 1;

    printf("Position (1:Front, 2:Middle, 3:End): ");
    if (scanf("%d", &choice) != 1) return 1;

    switch (choice) {
        case 1:
            insertion_index = 0;
            break;
        case 3:
            insertion_index = current_size; 
            break;
        case 2:
            
            printf("Enter middle index (1 to %d): ", current_size - 1);
            if (scanf("%d", &insertion_index) != 1) return 1;

            if (insertion_index <= 0 || insertion_index >= current_size) {
                printf("Error: Invalid middle index.\n");
                return 1;
            }
            break;
        default:
            printf("Error: Invalid choice.\n");
            return 1;
    }

    for (i = current_size; i > insertion_index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[insertion_index] = element;
    current_size++;

    printf("\nArray After Insertion (at index %d):\n[ ", insertion_index);
    for (i = 0; i < current_size; i++) {
        printf("%d%s", arr[i], (i < current_size - 1) ? ", " : "");
    }
    printf(" ]\n");

    return 0;
}
