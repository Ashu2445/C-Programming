#include <stdio.h>

int main() {
    int num, reversed = 0, digit, original;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; // store original for comparison

    if (num < 0) {
        printf("Negative numbers are not palindromes.\n");
        return 0;
    }

    while (num > 0) {
        digit = num % 10;                  // get last digit
        reversed = reversed * 10 + digit;  // build reversed number
        num = num / 10;                     // remove last digit
    }

    if (original == reversed) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }

    return 0;
}
