// Write a C program to dynamically allocate memory for a structure Student containing roll number and marks, accept data from the user, and display it.
#include <stdio.h>
#include <stdlib.h>
struct student
{
    int rollNumber;
    float marks;
};
int main()
{
    struct student *s;
    system("clear");

    s = (struct student *)malloc(sizeof(struct student));
    printf("Enter Student Roll Number and Marks : ");
    scanf("%d %f", &s->rollNumber, &s->marks);

    printf("Student Details : \nRoll Number : %d\nMarks : %.2f", s->rollNumber, s->marks);

    return 0;
}