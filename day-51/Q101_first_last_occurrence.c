
#include <stdio.h>

int main() {
    int n, target, i;
    int first = -1, last = -1;

    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &target);

    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= target)
            high = mid - 1;
        else
            low = mid + 1;
    }

    if (low < n && arr[low] == target) {
        first = low;

        low = 0;
        high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] <= target)
                low = mid + 1;
            else
                high = mid - 1;
        }

        last = high;
    }

    printf("%d %d", first, last);

    return 0;
}

