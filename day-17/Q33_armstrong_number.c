
#include <stdio.h>

int main() {
    int n, original, temp;
    int digit, digits = 0, sum = 0;
    int power, i;

    scanf("%d", &n);

    if (n < 0) {
        printf("Not an Armstrong number");
        return 0;
    }

    original = n;
    temp = n;

    do {
        digits++;
        temp /= 10;
    } while (temp != 0);

    temp = n;

    do {
        digit = temp % 10;
        power = 1;

        for (i = 0; i < digits; i++) {
            power *= digit;
        }

        sum += power;
        temp /= 10;
    } while (temp != 0);

    if (sum == original)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}
