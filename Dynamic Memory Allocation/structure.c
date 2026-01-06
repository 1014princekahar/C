#include<stdio.h>
#include<stdlib.h>
struct student
{
    int roll;
    float marks;
};
int main()
{
    system("clear");
    struct student *s;
    s = (struct student *)malloc(sizeof(struct student));

    s->roll = 101;
    s->marks = 45.5;

    printf("Roll No is %d \nMarks is %.2f ",s->roll, s->marks);

    free(s);
    return 0;
}