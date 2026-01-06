#include <stdio.h>

struct emp
{
    int id;
    float salary;
} e[5];

int main()
{

    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter Employee %d ID : ", i + 1);
        scanf("%d", &e[i].id);
        getchar();
        printf("Enter Employee %d Salary : ", i + 1);
        scanf("%f", &e[i].salary);
    }

    int maximium;

    maximium = e[1].salary;
    for (i = 1; i < 5; i++)
    {
        if (maximium < e[i].salary)
        {
            maximium = e[i].salary;
        }
    }
    for (i = 0; i < 5; i++)
    {
        if (maximium == e[i].salary)
        {

            printf("Mximum salary is %f and it id is %d ", e[i].salary, e[i].id);
        }
    }
    return 0;
}