#include <stdio.h>

int main() {
    
    int scores[] = {45, 12, 88, 7, 63, 20, 91, 34, 50, 19};
    int N = sizeof(scores) / sizeof(scores[0]);
  
    int even_array[N];
    int odd_array[N];
    
    int even_count = 0;
    int odd_count = 0;
    
    printf("--- Array Traversal and Splitting Program ---\n");
    printf("Original Scores Array:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", scores[i]);
    }
    printf("\n\n");

    for (int i = 0; i < N; i++) {
        int current_score = scores[i];
        
        if (current_score % 2 == 0) {           
            even_array[even_count] = current_score;
            even_count++;
        } else {           
            odd_array[odd_count] = current_score;
            odd_count++;
        }
    }
 
    printf("Even Scores (%d total):\n", even_count);
    for (int i = 0; i < even_count; i++) {
        printf("%d ", even_array[i]);
    }
    printf("\n");
 
    printf("Odd Scores (%d total):\n", odd_count);
    
    for (int i = 0; i < odd_count; i++) {
        printf("%d ", odd_array[i]);
    }
    printf("\n");

    return 0;
}
