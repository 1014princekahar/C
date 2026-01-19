#include<stdio.h>
int main()
{
    FILE *f = fopen("student.txt","r");
    char ch;
    int countChar = 0;
    while((ch = fgetc(f)) != EOF)
        countChar++;
    printf("%d charater in the student.txt file", countChar);
    fclose(f);
    return 0;
}