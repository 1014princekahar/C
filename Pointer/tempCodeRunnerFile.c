#include <stdio.h>
#include <stdlib.h>

void show(int *p, int *q)
{
    *p = *p + 10; // *p +=10
    *q = *q + 20; // *q += 20
    printf("\n a = %d ", *p);
    printf("\n b = %d ", *q);
}
int main()
{
    system("clear");
    int a = 10, b = 20;
    show(&a, &b);

    printf("\n a = %d ", a);
    printf("\n b = %d ", b);
    return 0;
}