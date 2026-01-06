// Find Second largext Element in an Array
#include<stdio.h>

int main() { 

    
    int size, i ,j ;
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
    printf("Second Largest Element is %d " , arr[1] ) ; 
    return 0 ;
}