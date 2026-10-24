#include <stdio.h>

int main(void) {
    long long n, sum;

    printf("Enter n: ");
    scanf("%lld", &n);

    if (n < 1 || n > 4294967295LL) {
        printf("Enter a positive n within the supported range.\n");
        return 1;
    }

    sum = n * (n + 1) / 2;

    printf("Sum = %lld\n", sum);

    return 0;
}
