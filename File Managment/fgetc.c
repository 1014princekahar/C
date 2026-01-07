#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *f;
    char ch;
    system("clear");
    f = fopen("text3.txt", "r");

    while((ch = fgetc(f)) != EOF)
        printf("%c",ch);
    return 0;
}