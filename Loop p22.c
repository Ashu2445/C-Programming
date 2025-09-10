#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        count = 1; // special case: 0 has 1 digit
    } else {
        if (num < 0) {
            num = -num; // make positive for counting
        }
        while (num > 0) {
            num = num / 10; // remove last digit
            count++;
        }
    }

    printf("Number of digits: %d\n", count);

    return 0;
}
