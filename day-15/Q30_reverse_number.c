
#include <stdio.h>

int main() {
    long long n, reverse = 0;
    int digit;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    long long temp = n;

    while (temp != 0) {
        digit = temp % 10;

        if (reverse > (9223372036854775807LL - digit) / 10 ||
            reverse < (-9223372036854775807LL - 1 - digit) / 10) {
            printf("Reversed number is out of range\n");
            return 0;
        }

        reverse = reverse * 10 + digit;
        temp /= 10;
    }

    printf("Reversed number = %lld\n", reverse);

    return 0;
}
