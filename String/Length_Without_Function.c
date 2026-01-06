// Find String Length Without Using Function
#include<stdio.h>

int main() { 

    char str[100] ,len = 0 ;
    printf("Enter a String :- ") ;
    fgets(str , sizeof(str) , stdin ) ;

    for ( int i = 0 ; str[i] != '\0' ; i++ ) {
        len++;
    } 
    printf("Length of string is %d " , len-1 ) ;
    return 0 ;
}