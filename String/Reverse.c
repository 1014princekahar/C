// Reverse a String
#include<stdio.h>

int main() { 

    char str[100] = "Hello World" ;
    int i , len ;
    for ( i = 0 ; str[i] !='\0' ; i++ ) {
        len++;
    }
    for( i = len ; i>=0 ; i-- ) {
        printf("%c" , str[i] ) ;
    }
    return 0 ;
}