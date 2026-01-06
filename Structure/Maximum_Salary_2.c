#include <stdio.h>

struct emp
{
    int id;
    char name[100];
    float salary;
} e[5];

int main()
{

    int i, max, max1 = 0, m;
    for (i = 0; i < 5; i++)
    {
        printf("Enter Employee %d ID : ", i + 1);
        scanf("%d", &e[i].id);
        getchar();
        printf("Enter Employee %d Name : ", i + 1);
        fgets(e[i].name, sizeof(e[i].name), stdin);
        printf("Enter Employee %d Salary : ", i + 1);
        scanf("%f", &e[i].salary);
    }

    for (i = 1; i < 5; i++)
    {
        if (max1 < e[i].salary)
        {
            max = e[i].salary;
            m = i;
        }
    }
            printf("Employee %d Name is %s and its Salary is %f ", e[m].id , e[m].name, e[m].salary);
       
    return 0;
}