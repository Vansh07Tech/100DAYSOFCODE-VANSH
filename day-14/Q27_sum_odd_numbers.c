
#include <stdio.h>

int main() {
    int n;
    long long sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Enter a positive number\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        sum += 2LL * i - 1;
    }

    printf("Sum of first %d odd numbers = %lld\n",
           n, sum);

    return 0;
}
