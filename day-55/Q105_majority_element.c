
#include <stdio.h>

int main() {
    int n, i, candidate, count = 0, frequency = 0;

    scanf("%d", &n);

    if (n <= 0)
        return 0;

    int arr[n];

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    for (i = 0; i < n; i++) {
        if (arr[i] == candidate)
            frequency++;
    }

    if (frequency > n / 2)
        printf("%d", candidate);
    else
        printf("-1");

    return 0;
}
