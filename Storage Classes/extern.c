#include<stdio.h>
#include<stdlib.h>
extern globalVar = 100;  

void printGlobalVar()
{
    printf("%d",globalVar);
}
int main() {
    system("clear");
    // Prints: Global variable is: 100
    printGlobalVar(); 
    return 0;
}