
#include <stdio.h>

int main() {
    int n, i;
    long long total = 0, leftSum = 0;

    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    for (i = 0; i < n; i++) {
        if (leftSum == total - leftSum - arr[i]) {
            printf("%d", i);
            return 0;
        }

        leftSum += arr[i];
    }

    printf("-1");

    return 0;
}
