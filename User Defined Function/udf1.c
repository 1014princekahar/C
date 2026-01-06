#include <stdio.h>
#include <stdlib.h>
// Function Has no parameter no return type
void sum(); // Function Declaration , function Prototype
int main()  // Function Defination
{
    system("clear");
    sum(); // Function Calling
}
void sum() // Function Defination
{
    int a = 10, b = 20;
    printf("sum = %d", a + b);
}