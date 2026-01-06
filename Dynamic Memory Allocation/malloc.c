//#include<stdio.h>
//#include<stdlib.h>
#include "/home/prince-kahar/all.h"
int main() {
    system("clear");
    int *p, i;
    p = (int *)malloc(5*sizeof(int));
    p[0] = 10;
    p[1] = 20;

    for( i = 0 ; i < 5 ; i++ )
    {
        printf(" %d",p[i]);
    }
    return 0;
}