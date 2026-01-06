// write a c program to calculate sum of all digits in a given number 
//e.g. if N = 345 then sum = 3+4+5 = 12
#include<stdio.h>
int main() {
    int n , i , digit , sum = 0 ;
    printf("Enter a Number :- ") ;
    scanf("%d" , &n) ;
    for (int i = 0 ; n > 0 ; n /= 10) {
        digit = n % 10 ; // sepreate last digit one by one
        sum += digit ; // sum of sepreate digits
        // printf("%d" , digit) ;
    }
    printf("Sum of All Digits is %d" , sum ) ;
    return 0 ;
}