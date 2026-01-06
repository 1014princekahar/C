// Find the Sum and Average of Array Elements
#include<stdio.h>
int main() {
    int size , i  ;
    float sum = 0 , average ; 
    printf("Enter Array Size :- " ) ;
    scanf("%d" , &size ) ;

    int arr[size] ;
    for ( i = 0 ; i < size ; i++ ) {
        printf("Enter of arr[%d] :- " , i ) ; 
        scanf("%d" , &arr[i] ) ; 
    }

    for( i  = 0  ; i < size ; i++ ) {
        sum += arr[i] ;
    }

    average  = sum / size ; 
    printf("Sum of Element and Average is %.0f and %.2f " , sum , average ) ; 
    return 0 ; 
}