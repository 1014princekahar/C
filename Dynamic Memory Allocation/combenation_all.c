#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("clear");
    int *p, i;
    p = (int *)malloc(5 * sizeof(int));
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 50;
    printf("Print Using Malloc \n");
    for (i = 0; i < 5; i++)
    {
        printf(" %d", p[i]);
    }
    printf("\n\n");
    free(p);
    p = NULL;
    printf("Memory Freed Succesfully");
    printf("\n\n");
    p = (int *)calloc(5, sizeof(int));
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 50;
    printf("Print Using Calloc \n");
    for (i = 0; i < 5; i++)
    {
        printf(" %d", p[i]);
    }
    printf("\n\n");

    p = (int *)realloc(p, 8 * sizeof(int));
    p[5] = 60;
    p[6] = 70;
    p[7] = 80;
    printf("Print Using Calloc \n");
    for (i = 0; i < 8; i++)
    {
        printf(" %d", p[i]);
    }
    printf("\n\n");

    free(p);
    p = NULL;
    printf("Memory Freed Succesfully\n");
    return 0;
}