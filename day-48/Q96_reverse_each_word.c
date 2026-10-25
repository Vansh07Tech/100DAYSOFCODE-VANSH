
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i, start = 0, end, len;
    char temp;

    scanf(" %999[^\n]", str);

    len = strlen(str);

    for (i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;

            while (start < end) {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }

            start = i + 1;
        }
    }

    printf("%s", str);

    return 0;
}
