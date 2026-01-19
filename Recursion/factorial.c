// program to find factorial of number using recursion
#include <stdlib.h>
#include <stdio.h>
int factorial(int);
int main()
{
    int number;
    system("clear");
    printf("Enter number the find factorial: ");
    scanf("%d", &number);
    printf("Factorial = %d\n", factorial(number));
}

int factorial(int number)
{
    if (number == 1)
        return 1;
    return number * factorial(number - 1);
}