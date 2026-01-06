#include <stdio.h>
#include <stdlib.h>
// Function Has With no parameter no return type
// void sum(int, int);
void sum(int a, int b); // Function Declaration , function Prototype
int main()              // Function Defination
{
    system("clear");
    sum(10, 20); // Function Calling
}
void sum(int a, int b) // Function Defination
{
    printf("sum = %d", a + b);
}