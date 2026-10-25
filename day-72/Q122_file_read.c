#include <stdio.h>

int main() {
    FILE *fp;
    char line[1000];

    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error: Unable to open info.txt.\n");
        return 1;
    }

    printf("Contents of the file:\n");

    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}
