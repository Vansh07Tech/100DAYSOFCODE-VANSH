
#include <stdio.h>

int main() {
    int m, n, a[1000], b[1000], merged[2000];
    scanf("%d", &m);

    for (int i = 0; i < m; i++)
        scanf("%d", &a[i]);

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (a[i] <= b[j])
            merged[k++] = a[i++];
        else
            merged[k++] = b[j++];
    }

    while (i < m)
        merged[k++] = a[i++];

    while (j < n)
        merged[k++] = b[j++];

    for (int x = 0; x < k; x++)
        printf("%d ", merged[x]);

    printf("\n");
    return 0;
}
