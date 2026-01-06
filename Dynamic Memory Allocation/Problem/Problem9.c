// Write a C program to dynamically allocate memory for storing details of N employees (employee id and salary) using calloc() and display the records.
#include <stdio.h>
#include <stdlib.h>
struct employees
{
    int employeeID;
    float salary;
};
int main()
{
    struct employees *emp;
    int nEmployee, i;
    system("clear");
    printf("Eneter Number of Employee : ");
    scanf("%d", &nEmployee);
    emp = (struct employees *)calloc(nEmployee, sizeof(struct employees));

    for (i = 0; i < nEmployee; i++)
    {
        printf("Enter %d Employee ID and Salary : ", i + 1);
        scanf("%d %f", &emp[i].employeeID, &emp[i].salary);
    }

    for (i = 0; i < nEmployee; i++)
    {
        printf("\n\nEmployee %d Details : \nEmployee ID : %d \nEmployee Salary : %.2f", i + 1, emp[i].employeeID, emp[i].salary);
    }

    free(emp);
    return 0;
}