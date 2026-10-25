
#include <stdio.h>

int main() {
    char a[1000], b[1000];
    int freq[256] = {0};
    int i, anagram = 1;

    scanf(" %999[^\n]", a);
    scanf(" %999[^\n]", b);

    for (i = 0; a[i] != '\0'; i++) {
        if (a[i] != ' ') {
            char ch = a[i];

            if (ch >= 'A' && ch <= 'Z')
                ch += 32;

            freq[(unsigned char)ch]++;
        }
    }

    for (i = 0; b[i] != '\0'; i++) {
        if (b[i] != ' ') {
            char ch = b[i];

            if (ch >= 'A' && ch <= 'Z')
                ch += 32;

            freq[(unsigned char)ch]--;
        }
    }

    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            anagram = 0;
            break;
        }
    }

    if (anagram)
        printf("Anagrams");
    else
        printf("Not anagrams");

    return 0;
}
