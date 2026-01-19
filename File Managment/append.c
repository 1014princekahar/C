#include<stdio.h>
int main()
{
    FILE *f = fopen("append.txt", "a");
    fputs("Prince",f);
    fclose(f);
    return 0;
}