#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("clear");
    int a = 10;
    int *p = &a;
    a++;
    printf("a = %d a = %d a = %d ", a++, ++a ,a++ );
    printf("\n*p = %d", *p);
    printf("\nAddress of p is %ld ", p); //ls
    printf("\nAddress of a is %p ", &a); //ls
    return 0;
}