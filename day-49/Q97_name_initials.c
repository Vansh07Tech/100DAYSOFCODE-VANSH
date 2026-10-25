
#include <stdio.h>
#include <ctype.h>

int main() {
    char name[1000];
    int i, newWord = 1;

    fgets(name, sizeof(name), stdin);

    for (i = 0; name[i] != '\0'; i++) {
        if (isalpha((unsigned char)name[i])) {
            if (newWord) {
                printf("%c", name[i]);
                newWord = 0;
            }
        } else {
            newWord = 1;
        }
    }

    return 0;
}
