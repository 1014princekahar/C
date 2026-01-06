// Sort Array using Selection Sort
#include <stdio.h>

int main()
{

    int size, i, j;
    printf("Enter Array Size :- ");
    scanf("%d", &size);

    int arr[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter arr[%d] :- ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Array After Sorting : ");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}