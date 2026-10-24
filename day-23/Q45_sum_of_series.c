
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (double)(2 * i) / (4 * i - 1);
    }

    printf("%.2f", sum);

    return 0;
}
