#include <stdio.h>
int main()
{
    FILE *f = fopen("student.txt", "r");
    char ch;
    int countLine = 1;
    while ((ch = fgetc(f)) != EOF)
    {
        if (ch == '\n')
            countLine++;
    }
    printf("%d line in the student.txt file", countLine);
    fclose(f);
    return 0;
}