
#include <stdio.h>

int main() {
    int r, c, i, j, d;

    scanf("%d %d", &r, &c);
    int a[r][c];

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (d = 0; d < r + c - 1; d++) {
        int start = (d < c) ? 0 : d - c + 1;
        int end = (d < r) ? d : r - 1;

        for (i = start; i <= end; i++) {
            j = d - i;
            printf("%d ", a[i][j]);
        }
    }

    return 0;
}
