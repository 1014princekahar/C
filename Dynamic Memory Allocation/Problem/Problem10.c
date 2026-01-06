// Write a C program to dynamically allocate memory for N integers and search a given element in the array.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int element, *ptr, search, found = 0;
    system("clear");

    printf("Enter Number of Element : ");
    scanf("%d", &element);

    ptr = (int *)calloc(element, sizeof(int));

    for (int i = 0; i < element; i++)
    {
        printf("Enter %d Element : ", i + 1);
        scanf("%d", &ptr[i]);
    }
    printf("Which Element You Have To Find : ");
    scanf("%d", &search);

    for (int i = 0; i < element; i++)
    {
        if (search == ptr[i])
        {
            printf("%d is Found ", search);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("%d is not found ", search);

    return 0;
}