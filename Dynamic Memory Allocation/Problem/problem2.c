// Write a C program to dynamically allocate memory for storing marks of N students using calloc() and calculate the average marks.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, nStudents;
    float *marks, sum;
    system("clear");

    printf("Enter Number of  Studens : ");
    scanf("%d", &nStudents);

    marks = (float *)calloc(nStudents, sizeof(float));

    sum = 0;
    for (i = 0; i < nStudents; i++)
    {
        printf("Enter %d students Marks : ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i];
    }

    printf("Average of %d Students Marks is %.2f ", nStudents, sum / nStudents);

    free(marks);
    return 0;
}