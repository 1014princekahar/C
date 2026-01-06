// Write a C program to dynamically allocate memory for a string, accept the string from the user, and display it.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *str;
    int len, i;
    system("clear");
    printf("Enter Max Length of The String : ");
    scanf("%d", &len);

    str = (char *)malloc(len * sizeof(char));
    printf("Enter Your String : ");
    // scanf(" %[^\n]s", str);

    printf("Your String is %s ", str);

    free(str);
    return 0;
}