#include <stdio.h>

int main() {
    int choice, binary, decimal = 0, base = 1, rem;
    int num, temp, binaryNum = 0;

    printf("Choose conversion:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a Binary number: ");
        scanf("%d", &binary);

        temp = binary;
        decimal = 0;
        base = 1;

        while (temp > 0) {
            rem = temp % 10;
            decimal = decimal + rem * base;
            base = base * 2;
            temp = temp / 10;
        }

        printf("Decimal value = %d\n", decimal);
    }
    else if (choice == 2) {
        printf("Enter a Decimal number: ");
        scanf("%d", &num);

        temp = num;
        binaryNum = 0;
        base = 1;

        while (temp > 0) {
            rem = temp % 2;
            binaryNum = binaryNum + rem * base;
            base = base * 10;
            temp = temp / 2;
        }

        printf("Binary value = %d\n", binaryNum);
    }
    else {
        printf("Invalid Choice!");
    }

    return 0;
}
