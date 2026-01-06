// Program to find if the number is prime or not with recursion

#include <stdlib.h>
#include <stdio.h>
int prime(int number, int n);
int main()
{
    int number, ans, n = 2;
    system("clear");
    printf("Enter number: ");
    scanf("%d", &number);
    ans = prime(number, n);
    if (ans == 1 || number == 2)
        printf("Number is prime %d\n", number);
    else
        printf("Number is composite %d\n", number);
}

int prime(int number, int n)
{
    int count = 1;
    if (n > number)
        return;

    int ans;
    if (number % n == 0)
    {
        return count + prime(number, n + 1);
    }
}