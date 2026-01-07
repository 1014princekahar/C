#include<stdio.h>
int main()
{
    FILE *f;
    f = fopen("text2.txt","w");
    if(f == NULL )
        printf("File is Not open");
    else
        printf("file is open");
    return 0;
}