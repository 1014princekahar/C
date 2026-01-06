//Find Roll No using Structure
#include <stdio.h>

struct student
{
    int roll_no;
    char name[100];

} s[5];
int main()
{

    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter Student %d Roll No : ", i + 1);
        scanf("%d", &s[i].roll_no);
        getchar();
        printf("Enter Student %d Name : ", i + 1);
        fgets(s[i].name, sizeof(s[i].name), stdin);
    }

    int find_roll_no , find = 0 ;
    printf("Which Roll Number You Have To Find : ");
    scanf("%d", &find_roll_no);

    for (i = 0; i < 5; i++)
    {
        if (find_roll_no == s[i].roll_no)
        {
            printf("%d and %s", s[i].roll_no, s[i].name);
            find = 1;
        }
    }

    if(!find)
        printf("Student Details Not Fond");
    return 0;
}