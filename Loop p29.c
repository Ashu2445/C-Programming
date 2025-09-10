#include <stdio.h>

int main() {
    int num, i, isPrime = 1; // assume prime initially

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0; // numbers <= 1 are not prime
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a Prime Number.\n", num);
    } else {
        printf("%d is not a Prime Number.\n", num);
    }

    return 0;
}
