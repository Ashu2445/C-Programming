#include <stdio.h>

int main() {
    int i, pos = 0, neg = 0, zero = 0;
    float num;

    printf("Enter 200 numbers:\n");
    for (i = 1; i <= 200; i++) {
        printf("Number %d: ", i);
        scanf("%f", &num);

        if (num > 0)
            pos++;
        else if (num < 0)
            neg++;
        else
            zero++;
    }

    printf("\nPositive numbers: %d\n", pos);
    printf("Negative numbers: %d\n", neg);
    printf("Zeros: %d\n", zero);

    return 0;
}
