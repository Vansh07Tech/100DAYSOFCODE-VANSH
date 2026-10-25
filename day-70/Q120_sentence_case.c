#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int i, newWord = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (isspace((unsigned char)str[i])) {
            newWord = 1;
        } else if (newWord) {
            str[i] = toupper((unsigned char)str[i]);
            newWord = 0;
        } else {
            str[i] = tolower((unsigned char)str[i]);
        }
    }

    printf("Sentence case: %s", str);

    return 0;
}
