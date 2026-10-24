
#include <stdio.h>

int main() {
    unsigned int n;
    unsigned int binary[32];
    int i = 0;

    printf("Enter a non-negative integer: ");

    if (scanf("%u", &n) != 1) {
        printf("Invalid input\n");
        return 0;
    }

    if (n == 0) {
        printf("Binary = 0\n");
        return 0;
    }

    while (n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }

    printf("Binary = ");

    for (int j = i - 1; j >= 0; j--) {
        printf("%u", binary[j]);
    }

    printf("\n");
    return 0;
}
