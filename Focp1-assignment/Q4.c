#include <stdio.h>

int main() {
    int x, y, a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\nOriginal values: x = %d, y = %d\n", x, y);

    // 1. Using Temporary Variable
    a = x;
    b = y;
    temp = a;
    a = b;
    b = temp;
    printf("After swap (Temporary Variable): a = %d, b = %d\n", a, b);

    // 2. Using Arithmetic (a = a + b method)
    a = x;
    b = y;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap (Arithmetic): a = %d, b = %d\n", a, b);

    // 3. Using Bitwise XOR
    a = x;
    b = y;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swap (XOR): a = %d, b = %d\n", a, b);

    // 4. Using Pointer-like logic (manually swapping values via addresses)
    a = x;
    b = y;
    int *p = &a;
    int *q = &b;
    temp = *p;
    *p = *q;
    *q = temp;
    printf("After swap (Pointer Method): a = %d, b = %d\n", a, b);

    return 0;
}
