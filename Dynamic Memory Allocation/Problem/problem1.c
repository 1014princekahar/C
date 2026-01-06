// Write a C program to dynamically allocate memory for N integers using malloc() and display the elements.
#include <stdio.h>
#include <stdlib.h>
int main()
{

    int n, *integers, i;
    system("clear");
    printf("Enter Number of Elements : ");
    scanf("%d", &n);

    integers = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("Enter %d Element : ", i + 1);
        scanf("%d", &integers[i]);
    }

    for (i = 0; i < n; i++)
        printf("%d ", integers[i]);

    free(integers);
    return 0;
}