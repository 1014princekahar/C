#include <stdio.h>
int main()
{
    FILE *f = fopen("student.txt", "r");
    char ch;
    int countWord = 0;
    while ((ch = fgetc(f)) != EOF)
    {
        if (ch == ' ')
            countWord++;
    }
    printf("%d Word in the student.txt file", countWord);
    fclose(f);
    return 0;
}