#include <stdio.h>
void countLine(char fileName[]) 
{
    FILE *f = fopen(fileName, "r");
    
    int ch;
    int countline = 0;
    int countContent = 0;

    if (f == NULL) {
        printf("Error: Could not open file %s\n", fileName);
        return;
    }

    while ((ch = fgetc(f)) != EOF) {
        countContent = 1;
        if (ch == '\n') {
            countline++;
        }
    }
    if (countContent && ch != '\n') {
        countline++;
    }
    printf("%d line(s) in the %s file\n", countline, fileName);
    
    fclose(f);
}

int main() 
{
    countLine("student.txt");
    return 0;
}