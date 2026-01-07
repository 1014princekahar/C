#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *f;
    char ch[100];
    system("clear");
    f = fopen("text3.txt", "r");

    while(fgets(ch,100,f)!= NULL)
        printf("%s",ch);
    return 0;
}