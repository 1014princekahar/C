#include <stdio.h>
int main()
{
    FILE *f;
    f = fopen("text.txt", "w");
    if (f == NULL)
        printf("File is Not open\n");
    else
    {
        printf("file is open\n");
        fprintf(f, " %d %s %.2f ", 1, "PRINCE", 45.5);
        printf("Data Enetered Successfully\n");
    }
    fclose(f);
    return 0;
}