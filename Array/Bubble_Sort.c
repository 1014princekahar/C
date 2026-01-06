// Sort Array using Bubble Sort
#include<stdio.h>

int main() { 

    int size , i , j ; 
    printf("Enter Array Size :- ") ;
    scanf("%d" , &size ) ;

    int arr[size] ;
    for ( i = 0 ; i < size ; i++ ) {
        printf("Enter arr[%d] :- " , i) ;
        scanf("%d" , &arr[i] ) ; 
    }

    for ( i = 0 ; i < size-1 ; i++ ) {
        for( j = 0 ; j < size-i-1 ; j++ ){
            if( arr[j] > arr [j+1] ) {
                int temp = arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ; 
            }
        }
    }
    printf("Array After Sorting : ");
    for ( i = 0 ; i < size ; i++ ) {
        printf("%d\t" , arr[i] ) ;
    }
    return 0 ;
}