#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("clear");
    int *p, i;
    p = (int *)malloc(3*sizeof(int));
    
    free(p);
    p = NULL;
    return 0;
}