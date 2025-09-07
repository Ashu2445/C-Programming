#include <stdio.h>

int main() {
    int i;
    float num, largest, smallest;

    printf("Enter number 1: ");
    scanf("%f", &num);

    largest = smallest = num; // initialize with first number

    for (i = 2; i <= 100; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);

        if (num > largest)
            largest = num;
        if (num < smallest)
            smallest = num;
    }

    printf("\nLargest number = %.2f\n", largest);
    printf("Smallest number = %.2f\n", smallest);

    return 0;
}
