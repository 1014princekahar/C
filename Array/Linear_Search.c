// Search Element Using Linear Search
#include <stdio.h>

int main()
{

    int size, i, find, found = 0;
    printf("Array Size :- ");
    scanf("%d", &size);

    int arr[size];

    for (i = 0; i < size; i++)
    {
        printf("Enter arr[%d] :- ", i);
        scanf("%d", &arr[i]);
    }

    printf("Which Element you Have To Find :- ");
    scanf("%d", &find);

    for (i = 0; i < size; i++)
    {
        if (find == arr[i])
        {
            printf("%d is Found at %d position \n", find, i + 1);
            found = 1;
        }
    }

    if (!found)
    {
        printf("%d is not found ", find);
    }
    return 0;
}