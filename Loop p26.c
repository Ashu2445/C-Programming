#include <stdio.h>

int main() {
    int num, original, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; // store original number

    while (num > 0) {
        digit = num % 10;               // get last digit
        sum += digit * digit * digit;   // add cube of digit
        num = num / 10;                 // remove last digit
    }

    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
