// Sezrch Element Using Binary Search 10 20 30 40 50
#include <stdio.h>

int main()
{

    int size, i, find , j ;
    printf("Enter Array Size :- ");
    scanf("%d", &size);

    int arr[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter arr[%d] :- ", i);
        scanf("%d", &arr[i]);
    }

    for ( i = 0 ; i < size-1 ; i++ ) {
        for ( j = i+1 ; j < size ; j++ ) {
            if ( arr[i] > arr[j] ) {
                int temp = arr[i] ;
                arr[i] = arr[j] ;
                arr[j] = temp ;
            }
        }
    }


    // for ( i = 0 ; i < size ; i++ ) {
    //     printf("%d\t" , arr[i] ) ; 
    // }

    int low = 0, high = size, mid, found = 0;
    printf("\nWhich Element You Have To Find :- ");
    scanf("%d", &find);

    for (i = 0; i < size; i++)
    {

        if (low <= high)
        {
            mid = (low + high) / 2;

            if (arr[mid] == find)
            {
                printf("%d is found at %d poistion ", find, mid + 1);
                found = 1;
                break;
            }

            else if (arr[mid] < find)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }

    if (!found)
    {
        printf("%d is not found ", find);
    }
    return 0;
}