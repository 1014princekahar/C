// Write a C program to dynamically allocate memory for N integers and find the maximum element from the array.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int element, *integers, i, max;
    system("clear");
    printf("Enter Number of Elements : ");
    scanf("%d", &element);

    integers = (int *)malloc(element * sizeof(int));
    for (i = 0; i < element; i++)
    {
        printf("Enter %d Element : ", i + 1);
        scanf("%d", &integers[i]);
    }

    for (i = 0; i < element; i++)
    {
        if (integers[i] > integers[i + 1])
        {
            max = integers[i];
        }
    }
    printf("Maximum Element is %d ", max);

    free(integers);
    return 0;
}