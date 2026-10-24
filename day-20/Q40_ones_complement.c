
#include <stdio.h>

int main() {
    int n, temp, digit, digits = 0;
    int complement = 0, place = 1;

    scanf("%d", &n);
    temp = n;

    do {
        digit = temp % 10;

        if (digit != 0 && digit != 1) {
            printf("Invalid binary number");
            return 0;
        }

        complement += (digit == 0 ? 1 : 0) * place;
        place *= 10;
        digits++;

        temp /= 10;
    } while (temp > 0);

    printf("%0*d", digits, complement);

    return 0;
}
