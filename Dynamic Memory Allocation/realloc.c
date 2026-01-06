//#include<stdio.h>
//#include<stdlib.h>
#include "/home/prince-kahar/all.h"
int main() {
    system("clear");
    int *p, i;
    p = (int *)malloc(3*sizeof(int));
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p = (int *)realloc(p,5*sizeof(int));

    p[3] = 40;
    p[4] = 50;
    for( i = 0 ; i < 5 ; i++ )
    {
        printf(" %d",p[i]);
    }
    return 0;
}