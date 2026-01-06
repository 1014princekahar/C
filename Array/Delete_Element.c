// Delete Element in Array 
#include<stdio.h>

int main() { 

    int size , i , position; 
    printf("Enter Array Size :- ") ;
    scanf("%d" , &size ) ;

    int arr[size] ;
    for ( i = 0 ; i < size ; i++ ) {
        printf("Enter arr[%d] :- " , i) ;
        scanf("%d" , &arr[i] ) ; 
    }

    printf("Enter Position Where You have To Delete Your Element :- ");
    scanf("%d", &position);

    for ( i = (position-1) ; i < size ; i++ ) {
        arr[i] = arr[i+1] ;     
    }

    size--;  

    printf("Array After Delete Element : \n") ;
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0 ;
}