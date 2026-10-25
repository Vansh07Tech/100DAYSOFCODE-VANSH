
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    scanf("%999s", str);

    while (str[i] != '\0')
        i++;

    printf("%d", i);

    return 0;
}
