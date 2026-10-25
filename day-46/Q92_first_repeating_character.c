
#include <stdio.h>

int main() {
    char str[1000];
    int i, j, found = 0;

    scanf(" %999[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] < 'a' || str[i] > 'z')
            continue;

        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                printf("%c", str[i]);
                found = 1;
                break;
            }
        }

        if (found)
            break;
    }

    if (!found)
        printf("No repeating lowercase alphabet");

    return 0;
}
