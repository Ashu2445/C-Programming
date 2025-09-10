#include <stdio.h>

int main() {
    int n, i;
    long first = 1, second = 1, next;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++) {
        if (i == 1 || i == 2) {
            printf("1 ");
        } else {
            next = first + second;
            printf("%ld ", next);
            first = second;
            second = next;
        }
    }

    printf("\n");
    return 0;
}
