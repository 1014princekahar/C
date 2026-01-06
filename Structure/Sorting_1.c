// Sorting Roll No And Name using Structure
#include <stdio.h>
struct student
{
    int roll_no;
    char name[100];

} s[5];
int main()
{
    struct student temp;

    int i, j;
    for (i = 0; i < 5; i++)
    {
        printf("Enter Student %d Roll No : ", i + 1);
        scanf("%d", &s[i].roll_no);
        getchar();
        printf("Enter Student %d Name : ", i + 1);
        fgets(s[i].name, sizeof(s[i].name), stdin);
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5 - i - 1; j++)
        {
            if(s[j].roll_no > s[j+1].roll_no)
            {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp; 
            }
        }
    }

    printf("\nSorted : \n");
    for (i = 0; i < 5; i++)
    {
        printf("Student %d Roll No is %d \n", i + 1, s[i].roll_no);
        // getchar();
        printf("Student %d Name is %s", i + 1, s[i].name);
    }
    return 0;
}