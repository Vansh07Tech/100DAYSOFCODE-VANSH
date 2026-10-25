
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i, j, k, len;

    scanf(" %999[^\n]", str);
    len = strlen(str);

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            for (k = i; k <= j; k++)
                printf("%c", str[k]);

            printf("\n");
        }
    }

    return 0;
}
