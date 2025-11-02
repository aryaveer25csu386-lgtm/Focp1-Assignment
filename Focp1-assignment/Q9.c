#include <stdio.h>

int main() {

    int student_scores[] = {85, 92, 78, 99, 65, 100, 99, 95};
    int size = sizeof(student_scores) / sizeof(student_scores[0]);
    
    const int target_score = 99;
    
    int found_index = -1; 

    printf("Scores array: {85, 92, 78, 99, 65, 100, 99, 95}\n");
    printf("Searching for the first occurrence of score: %d\n", target_score);

    for (int i = 0; i < size; i++) {
        if (student_scores[i] == target_score) {
            found_index = i;           
            break; 
        }
    }

    if (found_index != -1) {
        printf("\nResult: Score '%d' found!\n", target_score);
        printf("The first occurrence of '%d' is at index: %d\n", target_score, found_index);
    } else {
        printf("\nResult: Score '%d' was not found in the array.\n", target_score);
    }

    return 0;
}
