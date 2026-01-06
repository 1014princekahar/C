//Matrix multiplication
#include<stdio.h>

int main() { 

    int row , col , row1 , col1 , i , j , k ;
    printf("Enter First Matrix Row :- " ) ;
    scanf("%d" , &row );
    printf("Enter First Matrix Column :- " ) ;
    scanf("%d" , &col ) ;

    printf("Enter Second Matrix Row :- " ) ;
    scanf("%d" , &row1 );
    printf("Enter Second Matrix Column :- " ) ;
    scanf("%d" , &col1 ) ;

    if ( col == row1 ) {

        int arr[row][col] , arr1[row1][col1] , multi[row][col1] ;
        for ( i = 0 ; i < row ; i++ ) {
            for ( j = 0 ; j < col ; j++ ) {
                printf("Enter arr[%d][%d] :- " , i , j ) ;
                scanf("%d" , &arr[i][j] ) ;
            }
        }

        for ( i = 0 ; i < row1 ; i++ ) {
            for ( j = 0 ; j < col1 ; j++ ) {
                printf("Enter arr1[%d][%d] :- " , i , j ) ;
                scanf("%d" , &arr1[i][j] ) ;
            }
        }   
        
        printf("Matrix 1 :- \n" ) ;
        for ( i = 0 ; i < row ; i++ ) {
            for ( j = 0 ; j < col ; j++ ) {
                printf("%d\t\t" , arr[i][j] ) ;
            }
            printf("\n" ) ; 
        }
        
        printf("Matrix 2 :- \n" ) ;
        for ( i = 0 ; i < row1 ; i++ ) {
            for ( j = 0 ; j < col1 ; j++ ) {
                printf("%d\t\t" , arr1[i][j] ) ;
            }
            printf("\n" ) ;
        }
        for ( i = 0 ; i < row ; i++ ) {
            for ( j = 0 ; j < col1 ; j++ ) {
                multi[i][j] = 0 ;
                for ( k = 0 ; k < col ; k++ ) {
                    multi[i][j] += arr[i][k] * arr1[k][j] ;
                }
            }
        }


        printf("Multiplication :- \n" ) ;
        for ( i = 0 ; i < row ; i++ ) {
            for ( j = 0 ; j < col1 ; j++ ) {
                printf("%d\t\t" , multi[i][j] ) ;
            }
            printf("\n" ) ;
        }
    }
    else {
        printf("Matrix Multiplication is not Possible ") ; 
    }
    return 0 ;
}