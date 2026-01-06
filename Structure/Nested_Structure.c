#include <stdio.h>

struct date
{
    int d, m, y;
};
struct Employee
{
    int id;
    struct date doj;
} s1;

int main()
{
    struct Employee emp;
    printf("Enter Employee ID : ");
    scanf("%d", &emp.id);
    printf("Enter Employee Date of Joining : ");
    scanf("%d %d %d", &emp.doj.d, &emp.doj.m, &emp.doj.y);

    printf("Empoloyee ID is %d " , emp.id);

    printf("\nEmployee Date of Joining is %d / %d / %d " , emp.doj.d , emp.doj.m, emp.doj.y);
    return 0;
}


    