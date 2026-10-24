
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0, term;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i == 1)
            term = 1.0;
        else
            term = (double)(2 * i - 1) / (2 * i);

        sum += term;
    }

    printf("%.2f", sum);

    return 0;
}
