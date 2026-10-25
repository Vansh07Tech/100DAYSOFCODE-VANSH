
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i, len, palindrome = 1;

    scanf(" %999[^\n]", str);

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
        printf("Palindrome");
    else
        printf("Not a palindrome");

    return 0;
}
