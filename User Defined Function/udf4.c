#include<stdio.h>
#include<stdlib.h>
// Function Has With parameter With return type
// int sum(int,int);
int sum(int a,int b); // Function Declaration , function Prototype
int main() // Function Defination
{
    system("clear");
    printf("sum = %d",sum(10,20) /* Function Calling */);  
    return 0;
}
int sum(int a,int b) // Function Defination
{   
    return a + b;
}