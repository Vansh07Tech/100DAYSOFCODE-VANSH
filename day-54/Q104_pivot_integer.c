
#include <stdio.h>

int main() {
    long long n, x, total;

    scanf("%lld", &n);

    total = n * (n + 1) / 2;

    for (x = 1; x <= n; x++) {
        if (x * x == total) {
            printf("%lld", x);
            return 0;
        }
    }

    printf("-1");

    return 0;
}
