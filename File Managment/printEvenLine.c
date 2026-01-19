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
    while( ch != EOF )
    if (countLine % 2 == 0)
        
    fclose(f);
    return 0;
}