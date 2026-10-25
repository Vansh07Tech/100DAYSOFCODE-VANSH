
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char name[1000];
    int i, start = 0, len;

    fgets(name, sizeof(name), stdin);
    len = strlen(name);

    while (len > 0 && (name[len - 1] == '\n' ||
                       name[len - 1] == '\r'))
        name[--len] = '\0';

    for (i = 0; i < len; i++) {
        if (name[i] == ' ')
            start = i + 1;
    }

    for (i = 0; i < start; i++) {
        if (i == 0 || name[i - 1] == ' ') {
            if (isalpha((unsigned char)name[i]))
                printf("%c. ", name[i]);
        }
    }

    printf("%s", name + start);

    return 0;
}
