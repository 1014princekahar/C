#include <stdio.h>
#include <stdlib.h>
void print(int n)
{
    if (n == 0)
        return;
    print(n - 1);
    printf("Hello\n");
}
int main()
{
    system("clear");
    print(5);
    return 0;
}