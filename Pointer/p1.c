#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("clear");
    int arr[] = {10, 20, 30};
    int *p = arr;
    printf("%d", *(p + 1));
    return 0;
}