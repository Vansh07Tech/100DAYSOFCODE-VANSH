#include <stdio.h>

int main(void) {
    long long totalSeconds;
    long long hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%lld", &totalSeconds);

    if (totalSeconds < 0) {
        printf("Time cannot be negative.\n");
        return 1;
    }

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("%02lld:%02lld:%02lld\n",
           hours, minutes, seconds);

    return 0;
}
