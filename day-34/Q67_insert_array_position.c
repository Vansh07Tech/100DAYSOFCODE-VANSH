
#include <stdio.h>

int main() {
    int n, i, value, pos;

    scanf("%d", &n);
    int arr[n + 1];

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d %d", &value, &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position");
        return 0;
    }

    for (i = n; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = value;

    for (i = 0; i <= n; i++)
        printf("%d ", arr[i]);

    return 0;
}
