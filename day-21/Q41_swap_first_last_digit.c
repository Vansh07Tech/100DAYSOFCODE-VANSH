
#include <stdio.h>

int main() {
    int n, temp, digits = 0;
    int first, last, divisor = 1, middle, result;

    scanf("%d", &n);

    if (n < 0) {
        printf("Enter a positive number");
        return 0;
    }

    temp = n;

    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
        digits++;
    }

    first = temp;
    last = n % 10;

    if (divisor == 1) {
        printf("%d", n);
    } else {
        middle = (n % divisor) / 10;
        result = last * divisor + middle * 10 + first;
        printf("%d", result);
    }

    return 0;
}
