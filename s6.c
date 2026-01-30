#include<stdio.h>
struct emp
{
    int emp_id;
    char name[20];
    float salary;
}e[5];
int main()
{
    int i,m1=0;
    for(i=0;i<5;i++)
    {nbjmn
        printf("Enter your emp id, name, salary : ");
        scanf("\n%d %s %f",&e[i].emp_id,e[i].name,&e[i].salary);
    }
    for(i=0;i<5;i++)
    {
        if(e[i].salary>m1)
        {
            m1 = e[i].salary;
            m1 = i;
        }
        {
            printf("max salary : %f emp id : %d emp name : %s",e[m1].salary,&e[m1].emp_id,e[m1].name);
        }
    }
    return 0;
}
