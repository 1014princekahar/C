// Write a C program to dynamically allocate memory for N integers and count the number of even and odd elements.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int element, *ptr, even = 0 , odd = 0;
    system("clear");

    printf("Enter Number of Element : ");
    scanf("%d", &element);

    ptr = (int *)calloc(element, sizeof(int));

    for (int i = 0; i < element; i++)
    {
        printf("Enter %d Element : ", i + 1);
        scanf("%d", &ptr[i]);
        if( ptr[i] % 2 == 0 )
            even++;
        else
            odd++;
    }
    printf("Odd Element is %d and Even Element is %d ", odd, even);

    free(ptr);
    return 0;
}