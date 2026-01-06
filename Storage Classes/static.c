#include <stdio.h>
#include <stdlib.h>
void count()
{
    static int count; //0
    printf("Sum = %d ",count);
    count++; //1
}
int main()
{
    system("clear");
    count(); //0
    count(); //1
    return 0;
}