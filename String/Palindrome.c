// String Palindrome
#include <stdio.h>

int main()
{

    char str[100], rev[100];
    printf("Enter a String :- ");
    fgets(str, sizeof(str), stdin);

    int len = 0, i, j, flag = 1;

    for (i = 0; str[len] != '\0'; i++)
    {
        len++;
    }
    for (i = len - 1, j = 0; i >= 0; i--, j++)
    {
        rev[j] = str[i];
    }
    rev[j] = '\0';

    for (i = 0; i < len; i++)
    {
        if (str[i] != rev[i])
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
    return 0;
}