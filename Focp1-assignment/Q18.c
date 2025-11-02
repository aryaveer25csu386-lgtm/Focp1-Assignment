#include <stdio.h>
int main() {
    int arr[] = {2, 10, 10, 100, 2, 10, 11, 2, 11, 2};    
    int n = sizeof(arr) / sizeof(arr[0]);
    int found_any_duplicate = 0;

    printf("Output: ");

    for (int i = 0; i < n; i++) {
        
        int is_first_occurrence = 1;
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                is_first_occurrence = 0;
                break; 
            }
        }

        if (is_first_occurrence) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    printf("%d ", arr[i]);                   
                    found_any_duplicate = 1; 
                    break; 
                }
            }
        }
    }
    if (found_any_duplicate == 0) {
        printf("-1");
    }
    printf("\n"); 
    return 0;
}
