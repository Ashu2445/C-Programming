#include <stdio.h>

int main() {
    int i, n;
    float num, sum = 0, mean;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 1; i <= n; i++) {
        printf("Number %d: ", i);
        scanf("%f", &num);
        sum += num;
    }

    mean = sum / n;

    printf("\nSum = %.2f\n", sum);
    printf("Mean = %.2f\n", mean);

    return 0;
}
