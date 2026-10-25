
#include <stdio.h>

int main() {
    int n, i, value, pos;

    scanf("%d", &n);
    int arr[n + 1];

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &value);

    pos = n;

    while (pos > 0 && arr[pos - 1] > value) {
        arr[pos] = arr[pos - 1];
        pos--;
    }

    arr[pos] = value;

    for (i = 0; i <= n; i++)
        printf("%d ", arr[i]);

    return 0;
}
