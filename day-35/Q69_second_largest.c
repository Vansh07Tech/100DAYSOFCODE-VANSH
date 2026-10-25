
#include <stdio.h>

int main() {
    int n, i;
    int largest, second;
    int hasSecond = 0;

    scanf("%d", &n);

    if (n < 2)
        return 0;

    int arr[n];

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    largest = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
    }

    for (i = 0; i < n; i++) {
        if (arr[i] < largest) {
            if (!hasSecond || arr[i] > second) {
                second = arr[i];
                hasSecond = 1;
            }
        }
    }

    if (hasSecond)
        printf("%d", second);
    else
        printf("No second largest element");

    return 0;
}
