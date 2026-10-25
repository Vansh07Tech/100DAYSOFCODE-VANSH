
#include <stdio.h>
#include <string.h>

int main() {
    char a[1000], b[1000], doubled[2000];
    int i, len1, len2;

    scanf("%999s", a);
    scanf("%999s", b);

    len1 = strlen(a);
    len2 = strlen(b);

    if (len1 != len2) {
        printf("Not a rotation");
        return 0;
    }

    for (i = 0; i < len1; i++)
        doubled[i] = a[i];

    for (i = 0; i < len1; i++)
        doubled[len1 + i] = a[i];

    doubled[2 * len1] = '\0';

    if (strstr(doubled, b) != NULL)
        printf("Rotation");
    else
        printf("Not a rotation");

    return 0;
}
