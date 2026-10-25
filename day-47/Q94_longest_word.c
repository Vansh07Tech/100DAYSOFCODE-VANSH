
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, start = 0;
    int currentLength = 0, maxLength = 0;
    int maxStart = 0;

    scanf(" %999[^\n]", str);

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            if (currentLength == 0)
                start = i;

            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                maxStart = start;
            }

            currentLength = 0;

            if (str[i] == '\0')
                break;
        }

        i++;
    }

    for (i = maxStart; i < maxStart + maxLength; i++)
        printf("%c", str[i]);

    return 0;
}
