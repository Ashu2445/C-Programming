#include <stdio.h>
#include <math.h>

int main() {
    int num, square, temp, power = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num; // square of the number
    temp = num;

    // find power of 10 based on number of digits in num
    while (temp > 0) {
        power *= 10;
        temp /= 10;
    }

    if (square % power == num) {
        printf("%d is an Automorphic Number.\n", num);
    } else {
        printf("%d is not an Automorphic Number.\n", num);
    }

    return 0;
}
