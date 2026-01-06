// program to print number from 1 to n and n to 1
#include <stdio.h>
#include <stdlib.h>

void printAscending(int n)
{
    if (n == 0)
        return;

    printAscending(n - 1);
    printf("%d ", n);
}

void printDescending(int n)
{
    if (n == 0)
        return;

    printf("%d ", n);
    printDescending(n - 1);
}

int main()
{
    int n;
    system("clear");
    printf("Enter n: ");
    scanf("%d", &n);

    printf("\nBlock 1 (1 to n):\n");
    printAscending(n);

    printf("\n\nBlock 2 (n to 1):\n");
    printDescending(n);

    return 0;
}