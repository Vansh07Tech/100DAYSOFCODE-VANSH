
#include <stdio.h>

int main() {
    int n, i, j, distinct = 1;

    scanf("%d", &n);
    int a[n][n];

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i][i] == a[j][j])
                distinct = 0;
        }
    }

    if (distinct)
        printf("Distinct");
    else
        printf("Not distinct");

    return 0;
}
