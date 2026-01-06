#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("clear");

    register int i; // Suggests fast access for loop counter
    for (i = 0; i < 5; i++)
    {
        printf("%d ", i);
    }
    return 0;
}