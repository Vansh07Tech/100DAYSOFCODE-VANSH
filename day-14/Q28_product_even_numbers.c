
#include <stdio.h>

int main() {
    int n;
    unsigned long long product = 1;
    int found = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Enter a positive number\n");
        return 0;
    }

    for (int i = 2; i <= n; i += 2) {
        product *= i;
        found = 1;
    }

    if (found)
        printf("Product = %llu\n", product);
    else
        printf("No even numbers in this range\n");

    return 0;
}
