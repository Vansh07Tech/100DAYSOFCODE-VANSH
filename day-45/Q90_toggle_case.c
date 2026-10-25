
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    scanf(" %999[^\n]", str);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;

        i++;
    }

    printf("%s", str);

    return 0;
}
