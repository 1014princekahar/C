#include <stdio.h>
int main()
{
    FILE *f = fopen("text3.txt", "r");
    int roll;
    char name[20];
    float marks;

    if (f == NULL)
        printf("File is Not open\n");
    else
    {
        printf("file is open\n");
        // fputc('A',f);

        fscanf(f, "%d %s %f", &roll, name, &marks);
        printf("%d %s %.2f", roll, name, marks);
    }
    fclose(f);
    return 0;
}