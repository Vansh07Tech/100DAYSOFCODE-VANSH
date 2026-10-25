
#include <stdio.h>

int main() {
    int n, k, i;
    long long sum = 0, maxSum;

    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("-1");
        return 0;
    }

    for (i = 0; i < k; i++)
        sum += arr[i];

    maxSum = sum;

    for (i = k; i < n; i++) {
        sum += arr[i] - arr[i - k];

        if (sum > maxSum)
            maxSum = sum;
    }

    printf("%lld", maxSum);

    return 0;
}
