// Count Even and Odd Elements in an Array
#include <stdio.h>

int main()
{

    int size, i, even = 0, odd = 0;
    printf("Enter Array Size :- ");
    scanf("%d", &size);

    int arr[size];

    for (i = 0; i < size; i++)
    {
        printf("Enter arr[%d] :- ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("There are %d Even Element And %d Odd Element " , even , odd ) ;
    return 0;
}