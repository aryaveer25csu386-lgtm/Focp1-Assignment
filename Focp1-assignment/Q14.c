#include <stdio.h>

int main() {

    int arr[] = {17, 2, 4, 11, 20, 19, 1, 0, 7, 31, 15, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int primeCount = 0;
    int i;          
    int j;          
    int num;        
    int isPrime;    

    printf("Input Array: {");
    for (i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i == n - 1) ? "" : ", ");
    }
    printf("}\n");

    for (i = 0; i < n; i++) {
        num = arr[i];
        isPrime = 1; 

        if (num <= 1) {
            isPrime = 0;
        }
        else {
            
            for (j = 2; j <= num / 2; j++) {
                if (num % j == 0) {
                    isPrime = 0; 
                    break;       
                }
            }
        }

        if (isPrime == 1) {
            primeCount++;
        }
    }
    printf("--------------------------------------\n");
    printf("Total number of prime numbers found: %d\n", primeCount);
    printf("--------------------------------------\n");

    return 0;
}