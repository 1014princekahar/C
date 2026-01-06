// Write a C program to dynamically allocate memory for an integer array and resize the array using realloc().
#include<stdio.h>
#include<stdlib.h>
int main() {
    int oldSize, newSize, i, *ptr;
    system("clear");

    printf("Enter Array Old size : ");
    scanf("%d", &oldSize);

    ptr = (int *)malloc(oldSize*sizeof(int));

    printf("Enter Array New Size : ");
    scanf("%d",&newSize);

    ptr = (int *)realloc(ptr, newSize*sizeof(int));

    free(ptr);
    return 0;
}