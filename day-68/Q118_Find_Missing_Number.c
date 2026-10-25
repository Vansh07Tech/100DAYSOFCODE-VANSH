
#include <stdio.h>

int main() {
    int n, arr[1000];
    scanf("%d", &n);

    int sum = n * (n + 1) / 2;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum -= arr[i];
    }

    printf("%d\n", sum);
    return 0;
}
