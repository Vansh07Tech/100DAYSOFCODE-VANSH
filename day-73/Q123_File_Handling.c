
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    FILE *fp;
    char filename[100];
    int ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;
    int lastChar = '\n';

    printf("Enter file name: ");
    scanf("%99s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error: Unable to open file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;

        if (ch == '\n')
            lines++;

        if (isspace((unsigned char)ch))
        {
            inWord = 0;
        }
        else if (!inWord)
        {
            words++;
            inWord = 1;
        }

        lastChar = ch;
    }

    if (characters > 0 && lastChar != '\n')
        lines++;

    fclose(fp);

    printf("\nTotal characters: %d\n", characters);
    printf("Total words: %d\n", words);
    printf("Total lines: %d\n", lines);

    return 0;
}
