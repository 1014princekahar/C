#include <stdio.h>
#include <stdlib.h>
// Function Has no parameter with return type
int sum(); // Function Declaration , function Prototype
int main()  // Function Defination
{
    system("clear");
    printf("Sum = %d ", sum() /* Function Calling */);
}
int sum() // Function Defination
{
    int a = 10, b = 20;
    return a + b;
}