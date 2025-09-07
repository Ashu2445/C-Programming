#include <stdio.h>

int main() {
    int i;
    float num, sum = 0, mean;

    printf("Enter 10 numbers:\n");
    for (i = 1; i <= 10; i++) {
        printf("Number %d: ", i);
        scanf("%f", &num);
        sum += num;
    }

    mean = sum / 10;

    printf("\nSum = %.2f\n", sum);
    printf("Mean = %.2f\n", mean);

    return 0;
}
