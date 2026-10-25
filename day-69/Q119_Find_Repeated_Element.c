
#include <stdio.h>

int main() {
    int n, arr[1000], result = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 1; i < n; i++)
        result ^= i;

    for (int i = 0; i < n; i++)
        result ^= arr[i];

    printf("%d\n", result);
    return 0;
}
