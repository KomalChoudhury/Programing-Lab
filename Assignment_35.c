#include <stdio.h>

int main() {
    int start, end, i, j, isPrime;

    // Input range from user
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++) {
        if (i < 2)
            continue;  // 0 and 1 are not prime numbers

        isPrime = 1;  // Assume i is prime

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;  // i is divisible by j, so not prime
                break;
            }
        }

        if (isPrime)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}

