#include <stdio.h>
int main()
{
    FILE *f;
    f = fopen("text1.txt", "w");
    if (f == NULL)
        printf("File is Not open\n");
    else
    {
        printf("file is open\n");
        fputc('A',f);
        printf("Data Enetered Successfully\n");
    }
    fclose(f);
    return 0;
}