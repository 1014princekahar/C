// Find the Maximum and Minimum Element in an Array
#include<stdio.h>

int main() { 
    int size , i ; 
    printf("Enter array of size :-" ) ; 
    scanf("%d" , &size ) ; 
    
    int arr[size] ;

    for ( i = 0 ; i < size ; i++ ) {
        printf("Enter arr[%d] :- " , i ) ;
        scanf("%d" , &arr[i] ) ;
    }

    int max = arr[0] ;
    for ( i = 1 ; arr[i] > max ; i++ ) {
        max = arr[i] ;
    }

    int min = arr[0] ;
    for ( i = 1 ; arr[i] < min ; i++ ) {
        min = arr[i] ;
    }

    printf("Maximum And Minimum Elementb is %d and %d " , max , min ) ;
    return 0 ;
}