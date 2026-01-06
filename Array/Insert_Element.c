// Insert Element in Array
#include <stdio.h>

int main()
{

    int size, i, element, position;
    printf("Enter Array Size :- ");
    scanf("%d", &size);

    int arr[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter arr[%d] :- ", i);
        scanf("%d", &arr[i]);
    }

    printf("Which Element You Have To Insert in Array :- ");
    scanf("%d", &element);

    printf("Enter Position Where You have To Insert Your Element :- ");
    scanf("%d", &position);

    for (i = size; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = element;
    size++;

    printf("Array After Insert Element : \n") ;
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}