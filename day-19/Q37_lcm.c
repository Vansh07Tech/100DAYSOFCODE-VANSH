
#include <stdio.h>

int main() {
    int a, b, x, y, temp, gcd;

    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }

    gcd = x;

    if (a == 0 || b == 0)
        printf("0");
    else
        printf("%d", (a / gcd) * b);

    return 0;
}
