
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, j = 0;
    char ch;

    scanf(" %999[^\n]", str);

    while (str[i] != '\0') {
        ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
            ch += 32;

        if (ch != 'a' && ch != 'e' && ch != 'i' &&
            ch != 'o' && ch != 'u') {
            str[j] = str[i];
            j++;
        }

        i++;
    }

    str[j] = '\0';

    printf("%s", str);

    return 0;
}
