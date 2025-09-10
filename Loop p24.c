#include <stdio.h>

int main() {
    int num, reversed = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num; // store for display

    // handle negative numbers
    int isNegative = 0;
    if (num < 0) {
        isNegative = 1;
        num = -num;
    }

    while (num > 0) {
        digit = num % 10;            // get last digit
        reversed = reversed * 10 + digit; // build reversed number
        num = num / 10;              // remove last digit
    }

    if (isNegative) {
        reversed = -reversed; // restore sign
    }

    printf("Original number: %d\n", original);
    printf("Reversed number: %d\n", reversed);

    return 0;
}
