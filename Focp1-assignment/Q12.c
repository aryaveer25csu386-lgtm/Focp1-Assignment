#include <stdio.h>

int main() {
    int scores[] = {85, 92, 78, 95, 88, 72, 99, 81};
    int n = sizeof(scores) / sizeof(scores[0]);

    if (n == 0) {
        printf("The array of scores is empty.\n");
        return 1; 
    }

    int max_score = scores[0];
    int min_score = scores[0];

    for (int i = 1; i < n; i++) {
        if (scores[i] > max_score) {
            max_score = scores[i];
        }
        if (scores[i] < min_score) {
            min_score = scores[i];
        }
    }

    printf("--- Score Analysis Report ---\n");
    printf("Total scores analyzed: %d\n", n);
    printf("-----------------------------\n");
    printf("Maximum Score (Highest Rank): %d\n", max_score);
    printf("Minimum Score (Lowest Rank): %d\n", min_score);
    printf("-----------------------------\n");

    return 0;
}
