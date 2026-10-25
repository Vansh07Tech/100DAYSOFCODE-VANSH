
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    scanf(" %999[^\n]", str);

    while (str[i] != '\0') {
        if (str[i] == ' ')
            str[i] = '-';

        i++;
    }

    printf("%s", str);

    return 0;
}
