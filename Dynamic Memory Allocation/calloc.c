#include<stdio.h>
#include<stdlib.h>

int main() {
    system("clear");
    int *p, i;
    p = (int *)calloc(5,sizeof(int));
    p[0] = 10;
    p[1] = 20;

    for( i = 0 ; i < 5 ; i++ )
    {
        printf(" %d",p[i]);
    }
    return 0;
}