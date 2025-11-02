#include <stdio.h>

int main() {
    int i, j, num;

    for (i = 1; i <= 5; i++) {
        num = 0;
        for (j = 1; j <= 5 - i; j++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("%d", num);
            num = 1 - num; 
        }

        for (j = 1; j <= 5 - i; j++) {
            printf(" ");
        }

        num = 0;
        for (j = 1; j <= i; j++) {
            printf("%d", num);
            num = 1 - num;
        }

        printf("\n");
    }

    return 0;
}
