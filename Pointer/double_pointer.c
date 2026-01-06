#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("clear");
    int a = 10;
    int *p;
    p = &a;
    int **q;
    q = &p;

    printf("\n a = %d ", a);
    printf("\n address of a = %p ", &a);

    printf("\n value of a = %d ", *p);
    printf("\n address of p = %p ", p);

    printf("\n value of a  = %d ", **q);
    printf("\n address of q = %p ", q);

    return 0;
}