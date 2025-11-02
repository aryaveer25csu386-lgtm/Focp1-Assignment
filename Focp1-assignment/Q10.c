#include <stdio.h>

int main() {

    int student_marks[] = {85, 99, 72, 100, 99, 90, 99, 65, 98, 99};

    int number_of_students = sizeof(student_marks) / sizeof(student_marks[0]);
    const int target_score = 99;
    int frequency_count = 0; 

    printf("Scanning %d student marks to find the frequency of score %d...\n", 
           number_of_students, target_score);

    for (int i = 0; i < number_of_students; i++) {
        
        if (student_marks[i] == target_score) {
            
            frequency_count++;
            
            printf("  -> Student at index %d scored %d! (Current count: %d)\n", 
                   i, target_score, frequency_count);
        }
    }

    printf("\n--- Analysis Complete ---\n");
    printf("The score '%d' was found %d time(s).\n", target_score, frequency_count); 
    printf("This means %d student(s) achieved a score of %d.\n", frequency_count, target_score);

    return 0;
}
