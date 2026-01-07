#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *f;
    char ch[100];
    system("clear");
    f = fopen("text3.txt", "r");

    while(fgets(f,100,f)!= NULL)
        printf("%c",ch);
    return 0;
}