#include <stdio.h>
#include <stdlib.h>
struct student
{
    int roll_no;
    char name[100];
    float marks;
};
void std(struct student s1)
{
    printf("Enter a student 1 roll no : ");
    scanf("%d", &s1.roll_no);
    getchar();
    printf("Enter a student 1 name : ");
    fgets(s1.name, sizeof(s1.name), stdin);
    printf("Enter a student 1 marks : ");
    scanf("%f", &s1.marks);
    printf("Student 1 Details :- \n");
    printf(" Roll No :- %d \nName :- %s \nMarks :- %.2f ", s1.roll_no, s1.name, s1.marks);
}
int main()
{
    system("clear");
    struct student s;
    std(s);
    return 0;
}